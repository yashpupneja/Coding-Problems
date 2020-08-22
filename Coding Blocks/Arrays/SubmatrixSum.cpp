//Sum of all the submatrices of a given matrix
//e.g. 1 1
	// 1 1
//submatrices=>4 submatrices(1*1)==4
//			   2 submatrices(1*2)==4
//			   2 submatrices(2*1)==4
//			   1 submatrices(2*2)==4
//						Sum=(4+4+4+4)=16
// Answer = 16
// Extraxting all possible submatrices == rectange(Brute Force Approach)
// Uniquely identify the top left and bottom right of all possible submatrices
// Finding all possible pairs of (Top left and bottom right)
// Every time for top left oordinate being(i,j) the bottom right would be always more than top left(row-wise) and hence bottom right will be (i+1,j),(i+1,j+1) and so on. It can never be less than (i,j)
// using 6 nested loops, the time complexity is O(n^6)

// Another Approach: Every element will be part of more than 1 sub matrix,
// In each submatrix, the element will be contributing for thee sum.
// Contribution of each cell/element in my final sum: = arr[i][j]*number of submatrices , where i,j is the  position of the current element
// Sum the contribution of all elements.
#include<bits/stdc++.h>
using namespace std;

int Submatrix(int **arr,int n,int m){
	//Find the contribution
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int tl=(i+1)*(j+1);
			int br=(n-i)*(n-j);
			sum += (tl * br) * arr[i][j];
		}
	}
	return sum;
}

int main(int argc,char const *argv[]){
	int n,m;
	cin>>n>>m;
	int **arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i] = new int[m];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	cout<<Submatrix(arr,n,m)<<endl;
	return 0;
} 