#include<bits/stdc++.h>
using namespace std;
//remove consecutive duplicate characters from a string
//ccoooding--->coding
void rd(char a[]){
	int l=strlen(a);
	if(l==1 or l==0){
		return;
	}
	int prev=0;
	for(int curr=1;curr<l;curr++){
		if(a[curr]!=a[prev]){
			prev++;
			a[prev]=a[curr];
		}
	}
	a[prev+1]='\0';
	return;
}
int main(){

	char a[1000];
	cin.getline(a,1000);
	rd(a);
	cout<<a<<endl;
	return 0;
}