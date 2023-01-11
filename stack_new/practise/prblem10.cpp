#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
node *head=0,*tail;
void push();
void pop();
void display();
int main(){
	int choice=1,sel;
	while(choice){
		cout<<"Enter 1 for push\n";
		cout<<"Enter 2 for pop\n";
		cout<<"Enter 3 to display\n";
		cin>>sel;
		switch(sel){
			case 1:push();break;
			case 2:pop();break;
			case 3: display();break;
			default: cout<<"Invalid option selected\n";
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
}
void push(){
	node *newnode;
	cout<<"Enter element to push\n";
	newnode=new node;
	cin>>newnode->data;
	newnode->link=NULL;
	if(head==0){
     head=tail=newnode;
	}
	else{
		tail->link=newnode;
		tail=newnode;
	}	
}
void display(){
	if(head==0){
		cout<<"Stack is empty\n";
	}
	else{
		node *temp;
		temp=head;
		cout<<"Elements of Stack are\n";
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->link;
		}
		cout<<endl;
	}
}
void pop(){
	if(head==0){
		cout<<"Stack is empty\n";
	}
	else{
		node *temp;
		temp=head;
		while(temp->link->link!=NULL){
			temp=temp->link;
		}
		temp->link=NULL;
		cout<<tail->data<<" is poped out\n";
		delete(tail);
		tail=temp;
	}
}

