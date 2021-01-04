//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

// Follow up:

// Could you solve this problem without using the library's sort function?
// Could you come up with a one-pass algorithm using only O(1) constant space?
 

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]
// Example 3:

// Input: nums = [0]
// Output: [0]
// Example 4:

// Input: nums = [1]
// Output: [1]

#include<bits/stdc++.h>
using namespace std;

void sortColors(int* nums,int n) {
        int x=0,y=0,z=0;
        for(int i=0;i<n;i++){
            (nums[i]==0)?x++:((nums[i]==1)?y++:z++);
        }
        for(int i=0;i<n;i++){
            if(x!=0){
                nums[i]=0;
                x--;
            }
            else if(y!=0){
                nums[i]=1;
                y--;
            }
            else if(z!=0){
                nums[i]=2;
                z--;
            } 
        }
    }

int main(){
	int n;
	cin>>n;
	int nums[n];
	for(int i=0;i<n;i++) cin>>nums[i];
	sortColors(nums,n);
	for(int i=0;i<n;i++) cout<<nums[i]<<" ";
}