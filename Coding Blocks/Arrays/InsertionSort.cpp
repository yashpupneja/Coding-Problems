//Insertion Sort Algorithm
#include<bits/stdc++.h>
using namespace std;
void is(int a[],int n){
	for(int i=0;i<=n-1;i++){
		int e=a[i];
		//place the current element at the right position in the sorted part
		int j=i-1;
		while(j>=0 and a[j]>e){
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=e;
	}
}
int main(){
	int n,key;
	cin>>n;
	int a[1000];
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	is(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}