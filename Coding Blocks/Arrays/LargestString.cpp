#include<bits/stdc++.h>
using namespace std;
//Given N strings. Find the largest string and the length of that string

int main(){

	int n;
	cin>>n;
	char a[1000];
	cin.get();
	char l[1000];
	int len=0;
	int llen=0;
	for(int i=0;i<n;i++){
		cin.getline(a,1000);
		cout<<a<<endl;
		len=strlen(a);
		if(len>llen){
			llen=len;
			strcpy(l,a);
		}
	}
	cout<<l<<" and "<<llen<<endl;

	return 0;
}