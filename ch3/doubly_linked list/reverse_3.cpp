#include<iostream>
using namespace std;
struct node{
	int data;
	node *nlink;
	node *plink;
};
int main(){
	int choice=1;
	node *head=0,*newnode,*temp,*temp2,*pnode,*tail;
	while(choice){
		cout<<"Enter value of node\n";
		newnode = new node;
		cin>>newnode->data;
		newnode->nlink=NULL;
		if(head==0){
			head=temp=newnode;
			newnode->plink=NULL;
		}
		else{
			temp->nlink=newnode;
			newnode->plink=temp;
			temp=newnode;
		}
		cout<<"Do u want to conti(0,1)?\n";
		cin>>choice;
	}
	cout<<"Elements of linked list are:\n";
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		tail=temp;
		temp=temp->nlink;
	}
	cout<<"\n tail data = "<<tail->data<<endl;
	cout<<"Elements of linked list in reverse order is\n";
	temp=head;
	while(temp!=NULL){
		pnode=temp;
		temp2=temp->nlink;
		temp->nlink=temp->plink;
		temp->plink=temp2;
		temp=temp2;
	}
	head=pnode;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->nlink;
	}
}
