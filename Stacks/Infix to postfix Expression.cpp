#include <bits/stdc++.h>
using namespace std;

class Stack{
	char *arr;
	int top;
	int capacity;
public:
	Stack(){
		this->capacity=1000000;
		arr=new char[capacity];
		top=-1;
	}
	int size(){
		return top+1;
	}
	bool isEmpty(){
		return top==-1;
	}

	bool isFull(){
		return top+1==capacity;
	}

	void push(char data){
		if(isFull()){
			cout<<"OverFlow"<<endl;
			return;
		}
		top++;
		arr[top]=data;
	}

	char peek(){
		if(isEmpty()){
			cout<<"Stack is empty"<<endl;
			return -1;
		}
		return arr[top];
	}

	char pop(){
		if(isEmpty()){
			cout<<"UnderFlow"<<endl;
			return -1;
		}
		return arr[top--];
	}
};

//Function to return precedence of operator
int pre(char c){
	if(c=='^')
		return 3;
	else if(c=='/'|| c=='*')
		return 2;
	else if(c=='+'||c=='-')
		return 1;
	else
		return -1;
}

//Function to convert infix to postfix expression
void infixtopostfix(string s){
	Stack st;
	st.push('#');
	int l=s.length();
	string ns;
	for(int i=0;i<l;i++){
		//if the character is the operand then directly append to string ns
		if((s[i]>='a'&& s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
			ns+=s[i];
		//if the character is the left paranthesis
		else if(s[i]=='(')
			st.push(s[i]);

		//if the character is the right paranthesis, pop the operators that are in the stack till left paranthesis
		else if(s[i]==')'){
			while(st.peek()!='#' && st.peek()!='('){
				char c= st.pop();
				ns+=c;
			}
			if(st.peek()=='('){
				st.pop();
			}
		}

		//if the character is the operator
		else{
			while(st.peek()!='#' && pre(s[i])<=pre(st.peek())){
				char c = st.pop();
				ns+=c;
			}
			st.push(s[i]);
		}
	}
	while(st.peek()!='#'){
		char c=st.pop();
		ns+=c;
	}
	cout<<ns<<endl;
}
int main(){
	int t;
	cin>>t;
	string s;
	while(t--){
		cin>>s;
		infixtopostfix(s);
	}
	return 0;
}