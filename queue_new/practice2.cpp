#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
node *head=0,*tail;
void enqueue();
void dequeue();
void peek();
void display();
int main(){
	int choice=1,sel;
	while(choice){
		cout<<"Enter 1 for enqueue\n";
		cout<<"Enter 2 for dequeue\n";
		cout<<"Enter 3 for peek\n";
		cout<<"Enter 4 to display\n";
		cin>>sel;
		switch(sel){
			case 1:enqueue();break;
			case 2:dequeue();break;
			case 3: peek();break;
			case 4: display();break;
			default: cout<<"Invalid option selected\n";
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
}
void enqueue(){
	node *newnode;
	cout<<"Enter element to Enqueue\n";
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
		cout<<"Queue is empty\n";
	}
	else{
		node *temp;
		temp=head;
		cout<<"Elements of Queue are\n";
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp=temp->link;
		}
		cout<<endl;
	}
}
void dequeue(){
	if(head==0){
		cout<<"Queue is empty\n";
	}
	else{
		node *temp;	
		temp=head->link;
		cout<<"Dequeed element is "<<head->data<<endl;
		delete(head);
		head=temp;	
}
}
void peek(){
	if(head==0){
		cout<<"Queue is empty\n";
	}
	else{
		cout<<tail->data<<" is peek element\n";
	}
}
