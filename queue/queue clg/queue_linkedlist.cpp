#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
node *rear=NULL,*front=NULL,*newnode,*temp;
void enqueue();
void dequeue();
void display();
void peek();
int main(){
	int choice=1,sel;
	while(choice){
		cout<<"Enter 1 for enqueue\n";
		cout<<"Enter 2 for dequeue\n";
		cout<<"Enter 3 to display\n";
		cout<<"Enter 4 to peek\n";
		cin>>sel;
		switch(sel){
			case 1:enqueue();break;
			case 2: dequeue(); break;
			case 3: display();break;
			case 4: peek();break;
			default:cout<<"Select valid option\n";
		}
		cout<<"Do you want to continue(0,1)\n";
		cin>>choice;
	}
}
void enqueue(){
	if(front==NULL){
		newnode= new node;
		rear=front=newnode;
		rear->link=NULL;
		cout<<"Enter data to enqueue\n";
		cin>>newnode->data;
	}
	else{
		newnode=new node;
		rear->link=newnode;
		rear=newnode;
		newnode->link=NULL;
		cout<<"Enter data to enqueue\n";
		cin>>newnode->data;
	}
}
void display(){
	if(front==NULL){
		cout<<"Queue is empty\n";
	}
	else{
		temp=front;
		cout<<"Elements of Queue are:\n";
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->link;
		}
		cout<<endl;
	}
}
void peek(){
	if(rear==NULL){
		cout<<"Queue is empty\n";
	}
	else{
		cout<<"Peek element is "<<rear->data<<endl;
	}
}
void dequeue(){
	if(front==NULL){
		cout<<"Queueu is empty\n";
	}
	else{
		temp=front;
		cout<<front->data<<" is dequeued\n";
		front=front->link;
		delete(temp);		
	}
}
