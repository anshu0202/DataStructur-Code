#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
int main(){
	node *newnode,*head=0,*temp,*tail,*ptemp,*ntemp;
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
	cout<<"\nValue of list after reversing the nodes\n";
	temp=tail->link;
	ntemp=temp->link;
	while(temp!=tail){
		ptemp=temp;
		temp=ntemp;
		ntemp=temp->link;
		temp->link=ptemp;
	}
	ntemp->link=tail;
	tail=ntemp;
	temp=tail->link;
	while(temp!=tail){	
		cout<<temp->data<<" \n";
		temp=temp->link;
	}
	cout<<temp->data;	
}

