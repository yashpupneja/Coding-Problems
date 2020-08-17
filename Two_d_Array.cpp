#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n]={0};
	int val=1;
	for(int i=0;i<=m-1;i++){
		for(int j=0;j<=n-1;j++){
			a[i][j]=val;
			val=val+1;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}