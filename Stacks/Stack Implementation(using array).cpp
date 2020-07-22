#include <bits/stdc++.h>
using namespace std;

typedef struct stack
{
	int capacity;
	int top;
	int* arr;
}Stack;

//function to initialize the stack
Stack* initializeStack(int capacity){
	Stack *st = (Stack*)malloc(sizeof(Stack));
	st->capacity = capacity;
	st->top = -1;
	st->arr = (int* )malloc(sizeof(int)*capacity);
	return st;
}

//Function to return stack size of the stack
int size(Stack *st){
	return st->top+1;
}

//Function to check if the stack is empty or not
int isEmpty(Stack *st){
	return st->top==-1;
}

//Function to check the stack is full or not
int isFull(Stack *st){
	return st->top == st->capacity;
}

//To push element in the stack
void push(Stack *st,int data){
	if(isFull(st)){
		cout<<"OverFlow"<<endl;
		return;
	}
	st->top = st->top + 1;
	st->arr[st->top]=data;
}

//Function to know the pop element
int peak(Stack *st){
	if(isEmpty(st)){
		cout<<"Stack is empty"<<endl;
		return -1;
	}
	return st->arr[st->top];
}
//Function to pop top element from stack
int pop(Stack *st){
	if(isEmpty(st)){
		cout<<"Underflow"<<endl;
		return -1;
	}
	int ele = st->arr[st->top];
	st->top = st->top-1;
	return ele;
}

int main(){
	int capacity,n;
	cin>>capacity>>n;
	Stack *st=initializeStack(capacity);
	for(int i=0;i<n;i++){
		int ele;
		cin>>ele;
		push(st,ele);
	}
	cout<<"Top of the stack = "<<peak(st)<<endl;
	cout<<"Size of the satck = "<<size(st)<<endl;

	if(isEmpty(st)){
		cout<<"Stack is empty";
	}
	else{
		cout<<"Stack is not empty"<<endl;
	}
	cout<<"Popping all the elements "<<endl;
	for(int i=0;i<n;i++){
		cout<<pop(st)<<endl;
	}
	cout<<"After Popping all the elements "<<endl;
	cout<<"Size of the satck = "<<size(st)<<endl;

	if(isEmpty(st)){
		cout<<"Stack is empty";
	}
	else{
		cout<<"Stack isnot empty";
	}
}