// Trapping Rain Water 
// Given an array arr[] of N non-negative integers representing height of blocks at index i as Ai where the width of each block is 1. Compute how much water can be trapped in between blocks after raining.
// Structure is like below:
// |  |
// |_|
// We can trap 2 units of water in the middle gap.

// Input:
// The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. Each test case contains an integer N denoting the size of the array, followed by N space separated numbers to be stored in array.

// Output:
// Output the total unit of water trapped in between the blocks.

// Constraints:
// 1 <= T <= 100
// 3 <= N <= 107
// 0 <= Ai <= 108

// Example:
// Input:
// 2
// 4
// 7 4 0 9
// 3
// 6 9 9

// Output:
// 10
// 0

// Explanation:
// Testcase 1: Water trapped by block of height 4 is 3 units, block of height 0 is 7 units. So, total unit of water trapped is 10 units.

#include <iostream>
using namespace std;
int trapped(int* arr,int n){
    int ans=0;
    int left_max[n],right_max[n];
    left_max[0]=arr[0];
    for (int i=1;i<n;i++) {
        left_max[i]=max(arr[i],left_max[i - 1]);
    }
    right_max[n-1]=arr[n-1];
    for (int i = n - 2; i >= 0; i--) {
        right_max[i] = max(arr[i], right_max[i + 1]);
    }
    for (int i = 1; i <n - 1; i++) {
        ans += min(left_max[i], right_max[i]) - arr[i];
    }
    return ans;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<trapped(a,n)<<endl;
    }
	//code
	return 0;
}