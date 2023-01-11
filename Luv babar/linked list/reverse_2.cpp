#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *link;
};
void display(struct node*);
struct node* reverse(struct node*);
int main(){
	int choice=1;
	struct node *head=0,*temp,*newnode;
	while(choice){
		cout<<"Enter value of node\n";
		newnode= new node;
		if(head==0){
			cin>>newnode->data;
			newnode->link=0;
			temp=head=newnode;
		}
		else{
			cin>>newnode->data;
			temp->link=newnode;
			temp=newnode;
			temp->link=0;
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Elements of linked list are\n";
	 display(head);
	 cout<<"\nElements of linked list after  reversing are\n";
head= reverse(head);
	 	 display(head);
}
void display(struct node *head){
	struct node *temp;
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}	
}
struct node* reverse(struct node *head){
	struct node *temp,*nlink,*plink;
	plink=0;
	temp=nlink=head;
	while(nlink!=0){
		nlink=nlink->link;
		temp->link=plink;
		plink=temp;
		temp=nlink;
	}
	head=plink;
	return head;	
}
