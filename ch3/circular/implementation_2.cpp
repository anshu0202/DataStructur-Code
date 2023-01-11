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
		while(temp->link!=head){	
		cout<<temp->data<<" \n";
		temp=temp->link;
	}
	cout<<temp->data;
	}
}

