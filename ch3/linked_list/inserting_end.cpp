#include<iostream>//insert at end
using namespace std;
struct node{
	int data;
	node *link;
};
int main(){
	node *newnode,*head=0,*temp;
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
	temp=head;
	while(temp->link!=0){
		temp=temp->link;
	}
	newnode=new node;
	cout<<"\nEnter the value of new node which is to insert at last\n";
	cin>>newnode->data;
	newnode->link=0;
	temp->link=newnode;
	cout<<"After inserting a node at the end\n";
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
}
