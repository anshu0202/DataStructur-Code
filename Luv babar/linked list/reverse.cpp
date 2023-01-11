#include<iostream>//iterative approach
using namespace std;
struct node{
	int data;
	struct node *nlink;
};
struct node reverse(struct node *x);
int main(){
	struct node  *head=0,*tail,*temp,*newnode;
	int choice=1;
	while(choice){
		if(head==0){
			newnode=new node;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		head=tail=newnode;
		head->nlink=0;
		}
		else{
			newnode=new node;
			cout<<"Enter value of node\n";
			cin>>newnode->data;
			tail->nlink=newnode;
			tail=newnode;
			tail->nlink=0;
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;		
	}
	cout<<"Elements of linked list are:\n";
	temp=head;
	if(temp->nlink==0){
		cout<<"There is no element in the linked list\n";
	}
	else{
		while(temp!=0){
		cout<<temp->data<<endl;
		temp=temp->nlink;
	}
	}
	reverse(head);
}
struct node  *reverse( struct node *head){
	struct node *pnode,*nnode,*temp;
	temp=head;
	while(temp!=0){
		nnode=temp->nlink;
		temp->nlink=pnode;
		pnode=temp;
		temp=nnode;	
	}
	head=pnode;
	temp=head;
	cout<<"After reversing\n";
		while(temp!=0){
		cout<<temp->data<<endl;
		temp=temp->nlink;
	}
	return head;
}
