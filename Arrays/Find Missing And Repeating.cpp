// Find Missing And Repeating 
// Given an unsorted array of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

// Note: If you find multiple answers then print the Smallest number found. Also, expected solution is O(n) time and constant extra space.

// Input:
// The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

// Output:
// Print B, the repeating number followed by A which is missing in a single line.

// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 106
// 1 ≤ A[i] ≤ N

// Example:
// Input:
// 2
// 2
// 2 2
// 3 
// 1 3 3

// Output:
// 2 1
// 3 2

// Explanation:
// Testcase 1: Repeating number is 2 and smallest positive missing number is 1.
// Testcase 2: Repeating number is 3 and smallest positive missing number is 2.

#include <bits/stdc++.h>
using namespace std;
void solve(long long *a,long long n){ 
    long long sum = (n * (n+1) ) /2, sumsq = (n * (n +1) *(2*n +1) )/6; 
    long long missing=0, repeating=0; 
      
    for(int i=0;i<n; i++){ 
       sum -= (long long )a[i]; 
       sumsq -= (long long)a[i]*(long long)a[i]; 
    } 
      
    missing = (sum + sumsq/sum)/2; 
    repeating= missing - sum; 
    cout<<repeating<<" "<<missing; 
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++) cin>>a[i];
    	solve(a,n);
        cout<<endl;
    }
	//code
	return 0;
}