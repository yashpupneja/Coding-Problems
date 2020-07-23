// Merge Arrays
// Given two sorted arrays arr1[] and arr2[] in non-decreasing order with size n and m. The task is to merge the two sorted arrays into one sorted array (in non-decreasing order).

// Note: Expected time complexity is O((n+m) log(n+m)). DO NOT use extra space.  We need to modify existing arrays as following.

// Input: arr1[] = {10};
//        arr2[] = {2, 3};
// Output: arr1[] = {2}
//         arr2[] = {3, 10}  

// Input: arr1[] = {1, 5, 9, 10, 15, 20};
//        arr2[] = {2, 3, 8, 13};
// Output: arr1[] = {1, 2, 3, 5, 8, 9}
//         arr2[] = {10, 13, 15, 20} 

// Input:
// First line contains an integer T, denoting the number of test cases. First line of each test case contains two space separated integers X and Y, denoting the size of the two sorted arrays. Second line of each test case contains X space separated integers, denoting the first sorted array P. Third line of each test case contains Y space separated integers, denoting the second array Q.

// Output:
// For each test case, print (X + Y) space separated integer representing the merged array.

// Constraints:
// 1 <= T <= 100
// 1 <= X, Y <= 5*104
// 0 <= arr1i, arr2i <= 109

// Example:
// Input:
// 2
// 4 5
// 1 3 5 7
// 0 2 6 8 9
// 2 3
// 10 12
// 5 18 20

// Output:
// 0 1 2 3 5 6 7 8 9
// 5 10 12 18 20

// Explanation:
// Testcase 1: After merging two non-decreasing arrays, we have, 0 1 2 3 5 6 7 8 9.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int *a1,int *a2,int m,int n){
    int a=m+n;
    int array[a];
    int index = 0;
 
    for(int i = 0; i < m; i++) {
      array[index] = a1[i];
      index++;
    }
 
    for(int i = 0; i < n; i++) {
      array[index] = a2[i];
      index++;
    }
    sort(array,array+a);
    for(int i = 0; i < a; i++)
      cout<<array[i]<<" ";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a1[x],a2[y];
        for(int i=0;i<x;i++){
            cin>>a1[i];
        }
        for(int i=0;i<y;i++){
            cin>>a2[i];
        }
        merge(a1,a2,x,y);
        cout<<endl;
    }
	//code
	return 0;
}