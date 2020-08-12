#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
	cout<<"Comparing "<<a<<" and "<<b<<endl;
	return a > b ;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//Sort using inbuilt function
	sort(a,a+n,compare);//parameters are the starting point and end point and third is the parameter for sorting.
	for(int i=0;i<n;i++){
		cout<<a[i]<<",";
	}
}