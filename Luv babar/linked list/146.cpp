#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
void display(struct node*);
struct node* reverse_head(struct node*);
int main(){
	node *newnode,*head=0,*temp;
	int choice =1;
	while(choice==1){
		newnode=new node;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		if(head==0){
			head=temp=newnode;
			newnode->link=0;
		}
		else{
			temp->link=newnode;
			temp=newnode;
			newnode->link=0;
		}
		cout<<"Do you want to contine?\n";
		cout<<"Click 1 to continue and 0 to exit\n";
		cin>>choice;
	}

	display(head);
	head=reverse_head(head);
	cout<<"\nAfter reversing first and last node\n";
	display(head);
}
void display(struct node *head){
	struct node *temp,*req;
		temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
}
struct node* reverse_head(struct node *head){
	struct node *tail,*pnode;
	tail=head;
	pnode=head;
	while(tail->link!=0){
		pnode=tail;
		tail=tail->link;
	}
	pnode->link=head;
	tail->link=head->link;
	head->link=0;
	head=tail;
	return head;
}

