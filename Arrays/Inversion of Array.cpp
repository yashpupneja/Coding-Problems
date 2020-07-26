// Inversion Of ArraysArrays
// Given an array of positive integers. The task is to find inversion count of array.

// Inversion Count : For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
// Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.

// Input:
// The first line of input contains an integer T denoting the number of test cases. The first line of each test case is N, the size of array. The second line of each test case contains N elements.

// Output:
// Print the inversion count of array.

// Constraints:
// 1 ≤ T ≤ 100
// 1 ≤ N ≤ 107
// 1 ≤ C ≤ 1018

// Example:
// Input:
// 1
// 5
// 2 4 1 3 5

// Output:
// 3

// Explanation:
// Testcase 1: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll merge(vector<ll> &target,vector<ll> &a,vector<ll> &b){
    ll n=a.size();
    ll m=b.size();
    ll count=0;
    ll i=0,j=0,k=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            target[k]=a[i];
            i++;
            k++;
        }
        else{
            count+=n-i;
            target[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n){
        target[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
        target[k]=b[j];
        j++;
        k++;
    }
    
    return count;
}
ll mergeSort(vector<ll> &v){
    ll n=v.size();
    if(n==1){
        return 0;
    }
    ll mid=(n-1)/2; 
    vector<ll> left;
    for(ll i=0;i<=mid;i++){
        left.push_back(v[i]);
    }
    vector<ll> right;
    for(ll i=mid+1;i<=n-1;i++){
        right.push_back(v[i]);
    }
    ll leftPart=mergeSort(left);
    ll rightPart=mergeSort(right);
    ll mergev=merge(v,left,right);
    return leftPart+rightPart+mergev;
}
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        cout<<mergeSort(v)<<endl;
    }
}