# -*- coding: utf-8 -*-
"""
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

Note:

    You must do this in-place without making a copy of the array.
    Minimize the total number of operations.


"""
def moveZeroes(nums):
        count=0
        for i in range(len(nums)):
            if nums[i]!=0:
                nums[count]=nums[i]
                count+=1
        while count<len(nums):
            nums[count]=0
            count+=1
        return nums
def main():
    num1=list(map(int,input().split()))
    print(moveZeroes(num1))

if __name__=='__main__':
	main()