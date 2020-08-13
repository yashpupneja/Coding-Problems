//Selection sort is used to sort randomly shuffled array in increasing/decreasing order. 
//In this algorithm, we first find out the smallest element in the array and then swap it with the first element and then the remaining array is unsorted array. 
//Now, starting from the second element,we perform the same procedure and hence elements will be sorted as needed.

#include<bits/stdc++.h>
using namespace std;
void ss(int a[],int n){
	for(int i=0;i<n-1;i++){
		int indx=i;
		for(int j=i;j<=n-1;j++){
			if(a[j]<a[indx]){
				indx=j;
			}
		}
		swap(a[i],a[indx]);
	}
}
int main(){
	int n,key;
	cin>>n;
	int a[1000];
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	ss(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
