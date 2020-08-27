// In this problem a query would be given in which top left indices would be provided and bottom left indices would be given.
// And we need to find the sum of one submatrice in between these coordinates
#include<bits/stdc++.h>
using namespace std;

// int preprocess(int **ar,int **arr,int m,int n){
// 	for(int i=0;i<n;i++){
// 		arr[0][i]=ar[0][i];
// 	}
// 	for(int i=1;i<m;i++){
// 		for(int j=0;j<n;j++){

// 		}
// 	}
// }

// int Submatrix(int **arr,int tli,int tlj,int bri,int brj){
// 	int sum=arr[bri][brj];
// 	if(tli>0) sum=sum-arr[tli-1][brj];
// 	if(tlj>0) sum=sum-arr[bri][tlj-1];
// 	if(tli>0 && tlj>0) sum=sum+arr[tli-1][tlj-1];
// 	return sum;
// }

int main(int argc,char const *argv[]){
	int m,n;
	cin>>m>>n;
	int arr[100][100];
	// for(int i=0;i<n;i++){
	// 	arr[i] = new int[m];
	// }
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<m;i++){
		for(int j=1;j<n;++j){
			arr[i][j]+=arr[i][j-1];
		}
	}

	for(int i=0;i<n;i++){
		for(int j=1;j<m;++j){
			arr[j][i]+=arr[j-1][i];
		}
	}
	int query;
	cout<<" Number of Queries are: "<<endl;
	cin>>query;
	while(query--){
		int tli,tlj,bri,brj;
		cin>>tli>>tlj>>bri>>brj;
		int sum=arr[bri][brj];
		if(tli>0) sum=sum-arr[tli-1][brj];
		if(tlj>0) sum=sum-arr[bri][tlj-1];
		if(tli>0 && tlj>0) sum=sum+arr[tli-1][tlj-1];
		cout<<sum<<endl;
	}
	return 0;
} 