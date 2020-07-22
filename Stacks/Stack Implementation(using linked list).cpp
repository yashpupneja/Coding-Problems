#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
	int data;
	struct Node* next;
}Node;

Node* head=NULL;
int size=0;

//Function to push
void push(int data){
	Node *newnode=(Node*)malloc(sizeof(Node));
	if(!newnode){
		cout<<"Heap size overflow"<<endl;
		return;
	}
	newnode->data=data;
	newnode->next=head;
	head=newnode;
	size++;
}

//Function to check whether stack is empty or not
int isEmpty(){
	return head==NULL;
}

//Function to print the top of the element
int peek(){
	if(isEmpty()){
		cout<<"Stack is empty"<<endl;
		return -1;
	}
	return head->data;
}
//Function to pop the element
int pop(){
	Node* temp;
	if(head== NULL){
		cout<<"Stack underflow"<<endl;
		return -1;
	}
	int ele=head->data;
	temp=head;
	head=head->next;
	size--;
	free(temp);
	return ele;
}
int sizeF(){
	return size;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		push(ele);
	}
	cout<<"Top of the stack = "<<peek()<<endl;
	cout<<"Size of the stack =  "<<sizeF()<<endl;
	cout<<"Popping all the elements :"<<endl;
	for(int i=0;i<n;i++){
		cout<<pop()<<endl;
	}
	cout<<"Size of the stack: "<<sizeF()<<endl;
	return 0;
}