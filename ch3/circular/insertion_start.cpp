#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
int main(){
	node *newnode,*head=0,*temp,*tail;
	int choice=1;
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
	cout<<"\nEnter value of node to be inserted at starting\n";
	cin>>newnode->data;
	if(tail==0){
		cout<<"List is empty\n";
		tail=newnode;
		tail->link=newnode;
	}
		else{
		     newnode->link=tail->link;
			 tail->link=newnode;	
		}
			temp=tail->link;
		while(temp->link!=tail->link){	
		cout<<temp->data<<" \n";
		temp=temp->link;
	}
	cout<<temp->data;	
}

