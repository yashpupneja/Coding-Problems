//Write a program which collects daily price quotes for some stock, and returns the span of that stock's price for the current day.

//The span of the stock's price today is defined as the maximum number of consecutive days (starting from today and going backwards) for which the price of the stock was less than or equal to today's price.

//For example, if the price of a stock over the next 7 days were [100, 80, 60, 70, 60, 75, 85], then the stock spans would be [1, 1, 1, 2, 1, 4, 6].


#include <bits/stdc++.h>
using namespace std;

class Stack{
public:
	int *arr;
	int top;
	int capacity;
	Stack(){
		this->capacity=1000000;
		arr=new int[capacity];
		top=-1;
	}
	bool isEmpty(){
		return top==-1;
	}

	bool isFull(){
		return top+1==capacity;
	}

	void push(int data){
		if(isFull()){
			cout<<"OverFlow"<<endl;
			return;
		}
		top++;
		arr[top]=data;
	}

	int pop(){
		if(isEmpty()){
			cout<<"UnderFlow"<<endl;
			return -1;
		}
		return arr[top--];
	}
};


//Function to calculate the stock span values
void calculate(int* dprice,int n,int* span){
	Stack st;
	st.push(0);
	span[0]=1;
	for(int i=1;i<n;i++){
		while(!st.isEmpty() && dprice[st.arr[st.top]]<=dprice[i])
			st.pop();
		if(st.isEmpty())
		  	span[i]=i+1;
		else
		 	span[i]=i-st.arr[st.top];
		//span[i]=st.isEmpty()?i+1:i-st.top;
		st.push(i);
	}
}
void print(int* s,int n){
	for(int i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	int s[n];
	int dprice[n];
	for(int i=0;i<n;i++){
		cin>>dprice[i];
	}
	calculate(dprice,n,s);
	print(s,n);
	return 0;
}