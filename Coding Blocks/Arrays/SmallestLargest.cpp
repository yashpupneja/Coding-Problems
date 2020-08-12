#include<bits/stdc++.h>
using namespace std;
//Find the largest and smallest number in an array
int main(){
	int n,key;
	cin>>n;
	int a[1000];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int l=INT_MIN;
	int s=INT_MAX;
	for(int i=0;i<n;i++){
		l=max(l,a[i]);
		s=min(s,a[i]);
	}
	cout<<"Largest element is : "<<l<<endl;
	cout<<"Smallest number is : "<<s<<endl;
	return 0;
}