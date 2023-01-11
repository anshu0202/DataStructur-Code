#include<iostream>//inserting
using namespace std;
struct node{
	int data;
	node *link;
};
int main(){
	node *newnode,*head=0,*temp;
	int choice=1,pos,i=1;
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
	cout<<"\nEnter the position where you want to insert the new node\n";
	cin>>pos;
	temp=head;
	while(i<=pos-2){
		temp=temp->link;
		i++;
	}
	newnode=new node;
	newnode->link=temp->link;
	cout<<"\nEnter the value of new node\n";
	cin>>newnode->data;
	temp->link=newnode;
	temp=head;
	cout<<"After inserting a node\n";
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
}
