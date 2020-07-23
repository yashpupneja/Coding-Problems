// Kadane's Algorithm
// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.

// Input:
// The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.

// Output:
// Print the maximum sum of the contiguous sub-array in a separate line for each test case.

// Constraints:
// 1 ≤ T ≤ 110
// 1 ≤ N ≤ 106
// -107 ≤ A[i] <= 107

// Example:
// Input
// 2
// 5
// 1 2 3 -2 5
// 4
// -1 -2 -3 -4
// Output
// 9
// -1

// Explanation:
// Testcase 1: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int subarray(int *arr,int n){
    int flag=0;
    int sum=0;
    int maxi=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0) flag=1;
    }
    if(flag==0){
        int m = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>m) m=arr[i];
        }
        return m;
    }
    else{
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum<0) sum=0;
            maxi=max(maxi,sum);
        }
        return maxi;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<subarray(arr,n)<<endl;
    }
	//code
	return 0;
}