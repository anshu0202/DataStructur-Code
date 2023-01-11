#include<iostream>
using namespace std;
struct node{
	int data;
	node *plink,*nlink;
};
int main(){
	node *head=0,*newnode,*temp;
	int choice=1,loc,i;
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
	cout<<"Enter the node you want to delete\n";
	cin>>loc;
	temp=head;
	for(i=0;i<loc-1;i++){
		temp=temp->nlink;
	}
	temp->plink->nlink=temp->nlink;
	temp->nlink->plink=temp->plink;
	delete(temp);
	cout<<"Value of nodes after deletion are:\n";
	temp=head;
	while(temp!=0){
		cout<<"Value = "<<temp->data<<endl;
		temp=temp->nlink;
	}
}
