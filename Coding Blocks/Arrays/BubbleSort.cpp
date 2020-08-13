//Bubble Sort : In this algorithm we take the largest element to the end by pairwise swapping.
//In this the two elements are compared with each other and the element that is smaller comes first and which is larger comes last. 
//In this way, the first iteration moves the largest element to the end and then moves the second largest element to the second last. 
//This is how the sorting is performed in the bubble sort.

#include<bits/stdc++.h>
using namespace std;
void bs(int a[],int n){
	for(int i=0;i<n-1;i++){
		//Pairwise swapping in the unsorted array
		for(int j=0;j<=n-1-i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
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
	bs(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
