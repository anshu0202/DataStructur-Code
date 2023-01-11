#include<iostream>//incomplete
using namespace std;
struct node{
	int data;
	node *link;
};
void display(struct node*);
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
//	temp=head;
//	while(temp!=0){
//		cout<<temp->data<<" ";
//		temp=temp->link;
//	}
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
void reverse(struct node *head){
	struct node *temp,*pnode,*nnode;
	int pos,count=1;
	cout<<"Enter position from where to reverse\n";
	cin>>pos;
	temp=head;
	while(count!=pos){
		temp=temp->link;
		count++;
	}
	req=temp;
	while(temp!=0){
		pnode=temp;
		temp=temp->link;
		nnode=temp->link;
		pnode->link=nnode;
		
	}
}
