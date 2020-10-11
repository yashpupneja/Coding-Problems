#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;
	sort(arr,arr+n);
	int sum=0;
	for (int i=0;i<n-2;i++){
		int left=i+1;
		int right=n-1;
		while(left<right){
			sum=arr[i]+arr[left]+arr[right];
			if(sum==target){
				cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right]<<endl;
				left++;
				right--;
			}
			else if(sum<target){
				left++;
			}
			else{
				right--;
			}
		}
	}
}


