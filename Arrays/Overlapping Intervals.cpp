// Overlapping Intervals
// Given a collection of Intervals,merge all the overlapping Intervals.
// For example:

// Given [1,3], [2,6], [8,10], [15,18],

// return [1,6], [8,10], [15,18].

// Make sure the returned intervals are sorted.

 

// Input:

// The first line contains an integer T, depicting total number of test cases. 
// Then following T lines contains an integer N depicting the number of Intervals and next line followed by the intervals starting and ending positions 'x' and 'y' respectively.


// Output:

// Print the intervals after overlapping in sorted manner.  There should be a newline at the end of output of every test case.

// Constraints:

// 1 ≤ T ≤ 50
// 1 ≤ N ≤ 100
// 0 ≤ x ≤ y ≤ 100


// Example:

// Input
// 2
// 4
// 1 3 2 4 6 8 9 10
// 4
// 6 8 1 9 2 4 4 7

// Output
// 1 4 6 8 9 10
// 1 9

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;        
        int arr[n],dep[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            cin>>dep[i];
        }
        sort(arr,arr+n);
        sort(dep,dep+n);
        
        int end=0;
        while(end<n){
            while(end<n-1 && dep[end]>=arr[end+1]){
                arr[end+1]=-1;
                dep[end]=-1;
            end++;
            }
            end++;
        }
        
        int i=0,j=0;
        while(i<n && j<n){
            while(i<n-1 && arr[i]==-1){
                i++;
            }
            while(j<n-1 && dep[j]==-1){
                j++;
            }
            cout<<arr[i]<<" "<<dep[j]<<" ";
            i++;
            j++;
        }
        cout<<endl;
    }
	return 0;
}