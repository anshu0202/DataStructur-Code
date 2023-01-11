#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *link;
};
void insert(int);
void print();
struct node *head=NULL,*temp;
int main(){
	int key=1;
	while(key!=-1){
		cout<<"Enter the value to insert\n";
		cin>>key;
		if(key==-1){
			break;
		}
		insert(key);
	}
	print();
}
void insert(int key){
	node *newnode=new node;
	newnode->data=key;
	newnode->link=NULL;
	if(head==NULL){
		head=temp=newnode;
	}
	else{
		temp->link=newnode;
		temp=newnode;
}
}
void print(){
	cout<<"Elements of linked list are:\n";
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
}
