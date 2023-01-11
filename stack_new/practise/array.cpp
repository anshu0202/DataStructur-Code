#include<iostream>
using namespace std;
int a[100],top=-1,size;
void push();
void pop();
int main(){
	int choice=1,sel;
	cout<<"Enter size of array\n";
	cin>>size;
	while(choice){
		cout<<"Enter 1 for push\n";
		cout<<"Enter 2 for pop\n";
		cin>>sel;
		switch(sel){
			case 1:push();break;
			case 2:pop();break;
			default: cout<<"Invalid option selected\n";
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
}
void push(){
	if(top==size-1){
		cout<<"Stack is full\n";
	}
	else{
		     ++top;
			cout<<"Enter value to push\n";
			cin>>a[top];
	}
}
void pop(){
	if(top==-1){
		cout<<"Stack is empty\n";
	}
	else{
		cout<<a[top]<<" element is poped out\n";
		top--;
	}
}
