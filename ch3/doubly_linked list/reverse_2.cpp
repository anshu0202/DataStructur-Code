#include<iostream>
using namespace std;
struct node{
	int data;
	node *plink,*nlink;
};
int main(){
	node *head=0,*newnode,*temp,*tail,*temp2;
	int choice=1,i;
	while(choice){
		newnode=new node;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		if(head==0){
			head=tail=newnode;
			newnode->plink=0;
		}
		else{
			tail->nlink=newnode;
			newnode->plink=tail;
			newnode->nlink=0;
			tail=newnode;
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
	if(head->nlink==0){
		cout<<"List cannot be reversed\n";
	}
	else{
	cout<<"Value of node after reversing them\n";
	temp=head;	
	while(temp!=0){
		temp2=temp->nlink;
		temp->nlink=temp->plink;
		temp->plink=temp2;
		temp=temp2;
	}
		temp=head;
		head=tail;
		tail=temp;
		temp=head;
	while(temp!=0){
		cout<<"Value = "<<temp->data<<endl;
		temp=temp->nlink;
	}
	}
}
 
