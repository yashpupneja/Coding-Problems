// Panda has become a scientist recently. In his laboratory, there are infinite number of chambers where a chamber number K is connected to a chamber number K-1.

// The numbering of chambers start from 0. Initially, X number of particles are present in the chamber number 0. The number of particles present in chamber K is K times the number of particles present in chamber K-1. You are supposed to help Panda in finding out the number of particles in a given chamber number N.

// Note: The number of particles in chamber K cannot be calculated until the number of particles in chamber K-1 are calculated.

// Input Format:

// The first line will contain the integer T, the number of test cases. Each test case consists of two space separated integers N and X.

// Output Format:

// For each test case, output the answer to Panda's query. Since the output can be very large, output the answer modulo 106+3.

// Constraints:

// 1 <= T <= 105

//     Subtask 1: (20 points)
//     1 <= N, X <= 105

//     Subtask 2: (80 points)
//     1 <= N, X <= 1018

// SAMPLE INPUT

// 2
// 1 3
// 2 1

// SAMPLE OUTPUT

// 3
// 2

// Explanation

// Case 1: For first test case, initially there were 3 particles. In Chamber K=1, the number of particles became 1*3 = 3.

// Case 2: Initially, there is only 1 particle. In Chamber K=1, the number of particle became 1*1 = 1. In Chamber K=2, the number of particle became 2*1 = 2.
//This solution gave TLE
#include<bits/stdc++.h>
using namespace std;
long long panda(long long n,long long x){
	if(n==1) return x;
	else{
		long long i=1;
		long long particle;
		while(i<=n){
			particle=i*x;
			x=particle;
			i++;
		}
		return particle;
	}
}
int main(){
	long long t;
	cin>>t;
	while(t--){
		long long n,x;
		cin>>n>>x;
		cout<<panda(n,x)<<endl;
	}
}
//The optmised solution is:
#include<bits/stdc++.h>
using namespace std;
#define mod 10000003
int main(){
	long long int arr[mod];
	arr[0]=1;
	for(long long int i=1;i<mod;i++)
	{
		arr[i]=((arr[i-1]%mod)*(i%mod))%mod;
	}
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,x;
		cin>>n>>x;	
		if(n>mod)
			cout<<0<<endl;
		else
			cout<<((arr[n]%mod)*(x%mod))%mod<<endl;
	}
}