#include<iostream>
using namespace std;
int a[100],rear=-1,front=-1,size;
void enqueue();
void dequeue();
void peek();
void display();
int main(){
	cout<<"Enter the size of array\n";
	cin>>size;
	int choice =1,sel;
	while(choice){
		cout<<"Enter 1 to enqueue\n";
		cout<<"Enter 2 to dequeue\n";
		cout<<"Enter 3 for peek\n";
		cout<<"Enter 4 for display\n";
		cin>>sel;
		switch(sel){
			case 1: enqueue();break;
			case 2: dequeue();break;
			case 3: peek(); break;
			case 4: display();break;
			default : cout<<"Select valid option\n";
		}
		cout<<"Do you want to continue\n";
		cin>>choice;
	}
}
void enqueue(){
	if(rear==size-1 && front==0){
		cout<<"Queue is full\n";
	}
	else if(rear==-1 && front==-1){
			rear++;
			front++;
		cout<<"Enter value to enqueue\n";
		cin>>a[rear];
	}
	else{
		rear++;
		cout<<"Enter value to enqueue\n";
		cin>>a[rear];
	}
}
void dequeue(){
	if(rear==-1){
		cout<<"Queue is empty\n";
	}
	else if(rear==front+1){
		cout<<"Queue is empty\n";
	}
	else{
		cout<<a[front]<<" is dequeued\n";
		front++;
	}
}
void display(){
	int i;
	if(rear==-1){
		cout<<"Queue is empty\n";
	}
	else{
		cout<<"Elements of Queue are:\n";
		for(i=front;i<=rear;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
void peek(){
	if(rear==-1){
		cout<<"Queue is empty\n";
	}
	else{
	cout<<a[rear]<<"  is peek element\n";	
	}
}
