#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
int main(){
	node *newnode,*head=0,*temp,*tail,*ptemp;
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
		temp=tail->link;
		while(temp->link!=tail->link){	
		ptemp=temp; 
		temp=temp->link;
	}
		ptemp->link=tail->link;
		delete(tail);
		tail=ptemp;
		temp=tail->link;
		cout<<"\nAfter deleting the last node\n";
		while(temp->link!=tail->link){	
		cout<<temp->data<<" \n";
		temp=temp->link;
	}
	cout<<temp->data;	
}

