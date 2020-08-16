#include<bits/stdc++.h>
using namespace std;
//Dividing the string into tokens according to the provided deliminator
int main(){
	char s[100]="Today is a rainy day";
	char *ptr=strtok(s," ");
	cout<<ptr<<endl;
	while(ptr!=NULL){
		ptr=strtok(NULL," ");
		cout<<ptr<<endl;
	}
	return 0;
}