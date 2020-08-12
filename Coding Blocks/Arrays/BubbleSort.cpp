#include<bits/stdc++.h>
using namespace std;
void bs(int a[],int n){
	for(int i=0;i<n-1;i++){
		//Pairwise swapping in the unsorted array
		for(int j=0;j<=n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
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
	bs(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}