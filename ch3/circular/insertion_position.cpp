#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
int main(){
	node *newnode,*head=0,*temp,*tail;
	int choice=1,x,i;
	while(choice){
		newnode=new node;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		newnode->link=0;
		if(head==0){		
		head=tail=newnode;
		tail->link=newnode;
	}
		else{
			tail->link=newnode;
			tail=newnode;
			tail->link=head;		
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	} 
	if(head==0){
		cout<<"There is no node in the list\n";
	}
	else{
		temp=head;
		cout<<"Value of node are:\n";
		while(temp->link!=head){	
		cout<<temp->data<<" \n";
		temp=temp->link;
	}
	cout<<temp->data;
	}
	newnode= new node;
	cout<<"\nEnter value of node to be inserted \n";
	cin>>newnode->data;
	cout<<"Enter the location\n";
	cin>>x;
	temp=tail->link;
	for(i=1;i<x-1;i++){
		temp=temp->link;
	}	
	cout<<"Value of node after insertion\n";
		newnode->link=temp->link;
		temp->link=newnode;
		temp=tail->link;
		while(temp->link!=tail->link){	
		cout<<temp->data<<" \n";
		temp=temp->link;
	}
	cout<<temp->data;	
}

