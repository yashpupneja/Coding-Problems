#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	//iterate over array
	int val=1;
	for(int i=0;i<=m-1;i++){
		for(int j=0;j<=n-1;j++){
			a[i][j]=val;
			val=val+1;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int j=0;j<n;j++){
		if(j%2==0){
			//Top Down Direction
			for(int i=0;i<n;i++){
				cout<<a[i][j]<<" ";
			}
		}
		else{
			for(int i=m-1;i>=0;i--){
				cout<<a[i][j]<<" ";
			}
			//Bottom Up Direction
		}
	}
	return 0;
}