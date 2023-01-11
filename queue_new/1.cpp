#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
node *head=NULL,*tail;
void enqueue();
void display();
void dequeue();
void peek();
int main(){
	int choice=1;
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
	node *newnode;
	newnode = new node;
	cout<<"Enter element to push\n";
	newnode->link=NULL;
	cin>>newnode->data;
	if(head==NULL){
		head=tail=newnode;
	}
	else{
		tail->link=newnode;
		tail=newnode;
	}
}
void display(){
	cout<<"Elements of queue are : \n";
	node *temp;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<endl;
}
void dequeue(){
	node *temp;
	cout<<head->data<<" is popped out\n";
	temp=head;
	//delete(head); // not working
	head=temp->link;
}
void peek(){
	cout<<"Peek element is "<<tail->data<<endl;
}
