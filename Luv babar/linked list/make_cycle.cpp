#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *link;
};
void display(struct node*);
void makecycle(struct node*);
void check_loop(struct node*);
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
	 cout<<"\n After insertion a loop\n";
	 makecycle(head);
	 check_loop(head);
}
void display(struct node *head){
	struct node *temp;
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}	
}
void makecycle(struct node* head){
	int pos,count=1;
	struct node *temp,*startnode;
	temp=head;
	cout<<"Enter position where to form a loop\n";
	cin>>pos;
	while(temp->link!=0){
		if(count==pos){
			startnode=temp;
		}
		temp=temp->link;
		count++;
	}
	temp->link=startnode;
}
void check_loop(struct node* head){
	struct node *hare,*tortoise;
	int flag=0;
	hare=tortoise=head;
	while(hare!=0 && hare->link!=0){ // smjh nhii aaya
		tortoise=tortoise->link;
		hare=hare->link->link;
		if(hare==tortoise){
			cout<<"\nLoop is present \n";
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"\nLoop is not present in linked list\n";
	}

}

