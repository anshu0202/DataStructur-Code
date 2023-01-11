#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
node *newnode,*head=0,*temp;
void insert_start();
void insert_end();
int main(){
	int choice=1,sel;
	while(choice){
		newnode=new node;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		newnode->link=0;
		if(head==0){		
		head=temp=newnode;
	}
		else{
			temp->link=newnode;
			temp=newnode;
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	} 
	temp=head;
	cout<<"Value of element of nodes are:\n";
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<"\nEnter 1 for inserting at the beginning\n";
	cout<<"Enter 2 for inserting at the end\n";
	cin>>sel;
	switch(sel){
	case 1:	insert_start(); break;
	case 2:	insert_end(); break;
	default: cout<<"Select valid option\n";
	}
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
}
void insert_start(){
	newnode=new node;
	newnode->link=head;
	head=newnode;
	cout<<"Enter the value of new node which is to insert \n";
	cin>>newnode->data;
	temp=head;
	cout<<"After inserting a node\n";
}
void insert_end(){
	newnode=new node;
	cout<<"Enter the value of new node which is to insert \n";
	cin>>newnode->data;
	newnode->link=0;
	temp=head;
	while(temp->link!=0){
		temp=temp->link;
	}
	temp->link=newnode;
	cout<<"After inserting a node at the end\n";
}
