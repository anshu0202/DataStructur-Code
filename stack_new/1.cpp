#include<iostream>
using namespace std;
int a[100],top=-1,size;
void push();
void pop();
void display();
void peek();
int main(){
	int choice=1;
	cout<<"Enter size of array\n";
	cin>>size;
	while(choice){
		int select;
		cout<<"Enter 1 for push\n";
		cout<<"Enter 2 for pop\n";
        cout<<"Enter 3 for peek/top\n";
		cout<<"Enter 4 to display\n";
		cin>>select;
		switch(select){
			case 1:push();
			break;
			case 2: pop();break;
			case 3: peek();break;
			case 4: display();break;
			default : cout<<"Invalid option selected\n";
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
}
void push(){
	int value;
	cout<<"Enter value to insert\n";
	cin>>value;
	if(top==size-1){
		cout<<"Stack is full "<<value<<" is not entered\n";
	}
	else{
		top++;
		a[top]=value;
	}
}
void display(){
	if(top<0){
		cout<<"Stack is empty\n";
	}
	else{
		cout<<"Elements of Stack are\n";
	int i=0;
	for(i=0;i<=top;i++){
		cout<<a[i]<<" ";
	}
}
}
void pop(){
	if(top<0){
		cout<<"Stack is empty\n";
	}
	else{
	cout<<a[top]<<" is poped out\n";
	top--;
}
}
void peek(){
	if(top<0){
		cout<<"Stack is empty\n";
	}
	else{
	cout<<"Peek element is "<<a[top]<<endl;
}
}
