// You are given length of n sides, you need to answer whether it is possible to make n sided convex polygon with it.

// Input : -

// First line contains 

// ,no .of testcases.

// For each test case , first line consist of single integer 
// ,second line consist of 

// spaced integers, size of each side.

// Output : -

// For each test case print "Yes" if it is possible to make polygon or else "No" if it is not possible.

// SAMPLE INPUT

// 2
// 3
// 4 3 2 
// 4
// 1 2 1 4 

// SAMPLE OUTPUT

// Yes
// No

#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int sum=0,flag=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		for(int i=0;i<n;i++){
			sum-=a[i];
			if(a[i]>=sum){
				flag=1;
				break;
			}
			sum+=a[i];
		}
		if(flag==0) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}