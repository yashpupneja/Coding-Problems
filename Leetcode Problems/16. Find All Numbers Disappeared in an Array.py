# -*- coding: utf-8 -*-
"""
Given an array of integers where 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements of [1, n] inclusive that do not appear in this array.

Could you do it without extra space and in O(n) runtime? You may assume the returned list does not count as extra space.

Example:

Input:
[4,3,2,7,8,2,3,1]

Output:
[5,6]

"""
def findDisappearedNumbers(nums):
        a=set(range(1,len(nums)+1))
        b=set(nums)
        return list(a-b)
def main():
    num1=list(map(int,input().split()))
    print(findDisappearedNumbers(num1))

if __name__=='__main__':
	main()