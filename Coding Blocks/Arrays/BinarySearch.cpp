//Binary Search is used in sorted array only.
//Binary search is more efficient than the linear search. 
//In this the middle element is found and then if the element to be searched is less than middle then we move to left else we move to right. 
//We do the same thing till we find the element. 
//If the element is not found then we say that the element is not present. 
//This is also known as divide and conquer technique.
//Binary Search Algorithm.

#include<bits/stdc++.h>
using namespace std;

int bs(int a[],int n,int key){
	int s=0,e=n-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return -1;
}
int main(){
	int n,key;
	cin>>n;
	int a[1000];
	int i;
	for(i=0;i<n;i++){
	cin>>a[i];
	}
	cout<<"Enter teh element you want to search: ";
	cin>>key;
	cout<<bs(a,n,key)<<endl;
}
