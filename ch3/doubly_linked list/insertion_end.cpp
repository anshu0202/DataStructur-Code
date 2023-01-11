#include<iostream>
using namespace std;
struct node{
	int data;
	node *plink,*nlink;
};
int main(){
	node *head=0,*newnode,*temp;
	int choice=1,val,loc,i;
	while(choice){
		newnode=new node;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->nlink=newnode;
			newnode->plink=temp;
			newnode->nlink=0;
			temp=newnode;
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Value of nodes entered are:\n";
	temp=head;
	while(temp!=0){
		cout<<"Value = "<<temp->data<<endl;
		temp=temp->nlink;
	}
	cout<<"Enter the value you want to insert at end\n";
	cin>>val;
	temp=head;
	while(temp->nlink!=0){
		temp=temp->nlink;
	}
	newnode=new node;
	newnode->data=val;
	newnode->plink=temp;
	newnode->nlink=0;
	temp->nlink=newnode;
	cout<<"Value of nodes after insertion are:\n";
	temp=head;
	while(temp!=0){
		cout<<"Value = "<<temp->data<<endl;
		temp=temp->nlink;
	}
}
