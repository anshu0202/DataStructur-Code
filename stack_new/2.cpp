#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
node *head=NULL,*tail;
void push();
void pop();
void display();
void peek();
int main(){
	int choice=1;
	while(choice){
		int select;
		cout<<"Enter 1 for push\n";
		cout<<"Enter 2 for pop\n";
        cout<<"Enter 3 for peek/top\n";
		cout<<"Enter 4 to display\n";
		cin>>select;
		switch(select){
			case 1:push(); break;
			case 2: pop();break;
			case 3: peek();break;
			case 4: display();break;
			default : cout<<"Invalid option selected\n";
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Program ends now!\n";
}
void push(){
	node *newnode;
	cout<<"Enter value to push\n";
	newnode= new node;
	cin>>newnode->data;
	newnode->link=NULL;
	if(head==NULL){
		head=tail=newnode;
	}
	else{
		tail->link=newnode;
		tail=newnode;
	}
}
void pop(){
	if(head==NULL){
		cout<<"Stack is empty\n";
	}
	else{
	node *temp;
	temp=head;
	while(temp->link->link!=NULL){
		temp=temp->link;
	}
	temp->link=NULL;
	cout<<tail->data<<" is popped out\n";
	delete(tail);
	tail=temp;
}
}
void peek(){
	if(head==NULL){
		cout<<"Stack is empty\n";
	}
	else{
	cout<<"Peek element is "<<tail->data<<endl;
}
}
void display(){
	if(head==NULL){
		cout<<"Stack is empty\n";
	}
	else{
	node *temp;
	temp=head;
	cout<<"Elements of Stack are :\n";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<endl;
}
}
