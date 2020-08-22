//Staircase Search
// Given a sorted 2d array and a key is given , we need to find the position of the key.
// eg 1 4 8 10 
//	  2 5 9 15
//    6 16 18 20
//    11 17 19 23
//key==17 , we start from 10 , we move down as 17>10
//          then we need to move down as 15<17
#include<bits/stdc++.h>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int key;
	cin>>key;
	int i=0,j=n-1;
	int pass=0;
	while(i<m && j<n){
		if(a[i][j]==key){
        pass = 1;
        break;
    }
    else if(key<a[i][j]){
        j--;

    }
    else{
        i++;
    }
	}
	if(pass==1){
		cout<<"Position is: "<<i+1<<" "<<j+1<<endl;
	}
	return 0;
}