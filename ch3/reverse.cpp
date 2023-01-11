#include<iostream>//reverse a linked list
using namespace std;
struct node{
	int data;
	node *link;
};
int main(){
	node *newnode,*head=0,*temp,*prenode,*nextnode;
	int choice=1;
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
	temp=prenode=head;
	while(temp!=0){
		temp=temp->link;
	}
	prenode=0;
	temp=nextnode=head;
	while(nextnode!=0){
		nextnode=nextnode->link;
		temp->link=prenode;
		prenode=temp;
		temp=nextnode;
	}
	head=prenode;
	temp=head;
	cout<<"\nAfter reversing the linked list\n";
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
}
