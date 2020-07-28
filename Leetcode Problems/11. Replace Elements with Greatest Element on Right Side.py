# -*- coding: utf-8 -*-
"""
Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.

 

Example 1:

Input: arr = [17,18,5,4,6,1]
Output: [18,6,6,6,1,-1]

 

Constraints:

    1 <= arr.length <= 10^4
    1 <= arr[i] <= 10^5

"""
def replaceElements(arr):
        if len(arr)==1:
            return [-1]
        arr[0]=max(arr[1:])
        for i in range(1,len(arr)-1):
            if arr[i]!=arr[i-1]:
                arr[i]=arr[i-1]
            else:
                arr[i]=max(arr[i+1:])
        arr[-1]=-1
        return arr
def main():
    num1=list(map(int,input().split()))
    print(replaceElements(num1))

if __name__=='__main__':
	main()