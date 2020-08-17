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
	int sr=0,sc=0,er=m-1,ec=n-1;
	while(sr<=er and sc<=ec){
		//First Row
		for(int i=sc;i<=ec;i++){
			cout<<a[sr][i]<<" ";
		}
		sr++;

		for(int i=sr;i<=er;i++){
			cout<<a[i][ec]<<" ";
		}
		ec--;

		//Bottom Row
		if(er>sr){
			for(int i=ec;i>=sc;i--){
				cout<<a[er][i]<<" ";
			}
			er--;
		}

		//Start Column
		if(ec>sc){
			for(int i=er;i>=sr;i--){
				cout<<a[i][sc]<<" "; 
			}
			sc++;
		}
	}
	return 0;
}