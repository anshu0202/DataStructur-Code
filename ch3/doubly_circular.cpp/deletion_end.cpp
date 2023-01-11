#include<iostream>
using namespace std;
struct node{
	int data;
	node *plink,*nlink;
};
int main(){
	node *head=0,*newnode,*temp,*tail;
	int choice=1,loc,i=1;
	while(choice){
		newnode=new node;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		if(head==0){
			head=tail=newnode;
			newnode->nlink=tail;
			newnode->plink=head;
		}
		else{
			newnode->plink=tail;
			tail->nlink=newnode;
			newnode->nlink=head;
			tail=newnode;
			head->plink=newnode;
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Value of nodes entered are:\n";
	temp=head;
	while(temp!=tail){
		cout<<"Value = "<<temp->data<<endl;
		temp=temp->nlink;
	}
	cout<<"Value = "<<temp->data<<endl;
	head->plink=tail->plink;
	tail->plink->nlink=head;
	delete(tail);
	tail=head->plink;
	temp=head;
	cout<<"Linked list after deleting the last node   "<<endl;
	while(temp!=tail){
		cout<<"Value = "<<temp->data<<endl;
		temp=temp->nlink;
	}
	cout<<"Value = "<<temp->data<<endl;
}
