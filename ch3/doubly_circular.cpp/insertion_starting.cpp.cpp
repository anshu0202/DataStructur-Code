#include<iostream>//insertion at starting
using namespace std;
struct node{
	int data;
	node *plink,*nlink;
};
int main(){
	node *head=0,*newnode,*temp,*tail;
	int choice=1,val;
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
	cout<<"Enter the value to insert at beginning\n";
	newnode = new node;
	cin>>newnode->data;
	newnode->plink=head->plink;
	newnode->nlink=head;
	head->plink=newnode;
	tail->nlink=newnode;
	head=newnode;
	temp=head;
	cout<<"Linked list after insertion at beginning\n";
	while(temp!=tail){
		cout<<"Value = "<<temp->data<<endl;
		temp=temp->nlink;
	}
	cout<<"Value = "<<temp->data<<endl;
}
