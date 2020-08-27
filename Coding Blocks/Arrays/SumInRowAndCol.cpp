// Maximum sum submatrix in row and column wise sorted matrix
// Near what bottom right range I can find maximum sum.
// bottom left and top right will be less than bottom right that is why we are starting from bottom right
// suffix sum matrix will be constructed
#include<bits/stdc++.h>
using namespace std;

int maxSumSubmatrix(int **arr,int n,int m){
	// Column Wise addition
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			arr[i][j]+=arr[i][j+1];
		}
	}

	//For row wise addition
	for(int i=m-1;i>=0;i--){
		for(int j=n-2;j>=0;j--){
			arr[j][i]+=arr[j+1][i];
		}
	}

	int res=INT_MIN;

	for(int i=0;i<n;i++){
		for(int  j=0;j<n;j++){
			res=max(res,arr[i][j]);
		}
	}
	return res;
}

int main(int argc,char const *argv[]){
	int n,m;
	cin>>n>>m;
	int **arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[m];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<maxSumSubmatrix(arr,n,m)<<endl;
}