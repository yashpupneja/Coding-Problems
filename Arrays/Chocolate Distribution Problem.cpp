// Chocolate Distribution Problem 
// Given an array A of positive integers of size N, where each value represents number of chocolates in a packet. Each packet can have variable number of chocolates. There are M students, the task is to distribute chocolate packets such that :
// 1. Each student gets one packet.
// 2. The difference between the number of chocolates given to the students having packet with maximum chocolates and student having packet with minimum chocolates is minimum.

// Input:
// The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test case consists of three lines. The first line of each test case contains an integer N denoting the number of packets. Then next line contains N space separated values of the array A denoting the values of each packet. The third line of each test case contains an integer m denoting the no of students.

// Output:
// For each test case in a new line print the minimum difference.

// Constraints:
// 1 <= T <= 100
// 1 <=N<= 107
// 1 <= Ai <= 1018
// 1 <= M <= N

// Example:
// Input:
// 2
// 8
// 3 4 1 9 56 7 9 12
// 5
// 7
// 7 3 2 4 9 12 56
// 3

// Output:
// 6
// 2

// Explanation:
// Testcase 1: The minimum difference between maximum chocolates and minimum chocolates is 9-3=6

#include <bits/stdc++.h>
using namespace std;
int minimumchocolates(int n,int *a,int m){
    sort(a,a+n);
    int mini=a[m-1]-a[0];
    for(int i=m;i<n;i++){
        if(mini>a[i]-a[i-m+1]){
            mini=a[i]-a[i-m+1];
        }
    }
    return mini;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        { 
            cin>>a[i];
        }
        int m;
        cin>>m;
        cout<<minimumchocolates(n,a,m)<<endl;
    }
	//code
	return 0;
}