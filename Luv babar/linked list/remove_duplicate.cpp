#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
void display(struct node*);
void duplicate(struct node*);
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
	duplicate(head);
	cout<<"\nAfter deleting duplicate elements\n";
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
void duplicate(struct node* head){
struct	node *temp1,*nnode,*temp2,*pnode;
	temp1=head;
	while(temp1!=0){
		pnode=temp1;
		temp2=temp1->link;
		while(temp2!=0){
			if(temp1->data==temp2->data){
				nnode=temp2->link;
				pnode->link=nnode;
				cout<<"\n"<<temp1->data<<" is duplicate";
				delete(temp2);
				break;
			}
			pnode=temp2;
			temp2=temp2->link;			
		}
		temp1=temp1->link;
	}
}
