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
		cout<<"Enter 1 for enqueue\n";
		cout<<"Enter 2 for dequeue\n";
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
	else if(rear==-1){
		++rear;
		++front;
		cout<<"Enter element to enqueue\n";
		cin>>a[rear];
	}
	else{
		++rear;
		cout<<"Enter element to enqueue\n";
		cin>>a[rear];
	}
}
void dequeue(){
	if(front==-1){
		cout<<"Queue is empty\n";
	}
	else if(front==rear){
		cout<<"Dequeue element is "<<a[front]<<endl;
		front =rear=-1;
	}
	else{
		cout<<"Dequeue element is "<<a[front]<<endl;
		++front;
	}
}
void peek(){
	if(rear==-1){
		cout<<"Queue is empty\n";
	}
	else{
		cout<<"Peek element is "<<a[rear]<<endl;
	}
}
void display(){
	if(front==-1){
		cout<<"Queue is empty\n";
	}
	else{
		int i;
		cout<<"Elements of Queue are\n";
		for(i=front;i<=rear;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
