#include<bits/stdc++.h>
using namespace std;

int main(){
	string s0;
	string s1("Hello");
	string s2="Hello World";
	string s3(s2);
	string s4=s3;
	char a[]={'a','b','c','\0'};
	string s5(a);

	cout<<s0<<endl;
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;

	if(s0.empty()){
		cout<<"s0 is an empty string"<<endl;
	}

	//Append
	s0.append("I love C++");
	cout<<s0<<endl;
	s0+=" and Python.";
	cout<<s0<<endl;

	//Remove
	cout<<s0.length()<<endl;
	s0.clear();
	cout<<s0.length()<<endl;

	//Compare
	s0="Apple";
	s1="Mango";
	cout<<s1.compare(s0)<<endl; //Returns an integer value ==0, <0 and >0

	//Overloaded Operator
	if(s1>s0){
		cout<<"Mango is lexographically greater than Apple"<<endl;
	}
	//square brackets used in strings as well
	cout<<s0[0]<<endl;

	//Find Substrings
	string s="I want to have apple juice";
	int ind=s.find("apple");
	cout<<ind<<endl;

	//Remove word from string
	string word="apple";
	int len=word.length();
	cout<<s<<endl;
	s.erase(ind,len+1);
	cout<<s<<endl;

	//iterate overe all the characters in a string
	for(int i=0;i<s1.length();i++){
		cout<<s1[i]<<":";
	}
	cout<<endl;
	//iterators - it is a pointer hence we use * while printing
	for(auto it=s1.begin();it!=s1.end();it++){
		cout<<(*it)<<",";
	}
	cout<<endl;
	//For Each loop - auto gives the datatype automatically
	for(auto c:s1){
		cout<<c<<".";
	}
}