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
			newnode->plink=0;
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
	cout<<"Enter the value you want to insert at starting\n";
	cin>>val;
	newnode=new node;
	head->plink=newnode;
	newnode->data=val;
	newnode->nlink=head;
	head=newnode;
	cout<<"Value of nodes after insertion are:\n";
	temp=head;
	while(temp!=0){
		cout<<"Value = "<<temp->data<<endl;
		temp=temp->nlink;
	}
}
