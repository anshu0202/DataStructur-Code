#include<iostream>
using namespace std;
int a[10],size,front=-1,rear=-1;
void enqueue();
void display();
void dequeue();
void peek();
int main(){
int choice=1;
cout<<"Enter size of array\n";
cin>>size;
	while(choice){
		int opt;
		cout<<"Enter 1 for push\n";
		cout<<"Enter 2 for pop\n";
		cout<<"Enter 3 for peek\n";
		cout<<"Enter 4 to display\n";
		cin>>opt;
		switch(opt){
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3:peek();break;
			case 4:display();break;
			default: cout<<"Select valid option\n";
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Program ends now!\n";
}
void enqueue(){
	if(rear==size-1){
		cout<<"Queue is full\n";
	}
	else if(rear==-1 && front==-1){
		rear++;
		cout<<"Enter element to enqueue\n";
	cin>>a[rear];
	front++;
	}
	else{
		rear++;
	cout<<"Enter element to enqueue\n";
	cin>>a[rear];
}
}
void dequeue(){
	if(front==-1){
		cout<<"Queue is empty\n";
	}
	else if(rear==front){
		cout<<a[front]<<" is dequeue\n";
		front=rear=-1;
	}
	else{
	cout<<a[front]<<" is dequeue\n";
	front++;
}
}
void display(){
	if(front==-1){
		cout<<"Queue is empty\n";
	}
	else{
	int i;
	cout<<"Elements of queue are : \n";
	for(i=front;i<rear+1;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
}
void peek(){
	if(front==-1){
		cout<<"Queue is empty\n";
	}
	else{
	cout<<"Peek element is "<<a[front]<<endl;
}
}
