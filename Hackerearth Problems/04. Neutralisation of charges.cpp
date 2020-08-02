//Neutralisation of charges 
// In a parallel universe, there are not just two charges like positive and negative, but there are charges represented by  

// english alphabets.

// Charges have a property of killing each other or in other words neutralizing each other if they are of same charge and next to each other.

// You are given a string
// where each represents a charge, where

// .

// You need to output

//  of final string followed by string after which no neutralizing is possible.
// SAMPLE INPUT

// 12
// aaacccbbcccd

// SAMPLE OUTPUT

// 2
// ad

// Explanation

// aaacccbbcccd -> accd -> ad
#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main()
{
    int n;
	cin>>n;
	vector<char> st;
	char s;
	cin>>s;
	st.push_back(s);
	int i;
	for(i=1;i<n;i++){
		cin>>s;
		if(s==st[st.size()-1]){
           st.erase(st.begin()+st.size()-1);
       }
       else st.push_back(s);
   }
   cout<<st.size()<<endl;
   for(auto i: st){
       cout<<i;
   }
}