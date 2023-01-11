#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
node *head=0;
void display();
void sort();
int main(){
	int choice=1;
	node *newnode,*temp;
	while(choice){
		newnode=new node;
		newnode->link=0;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		if(head==0){
		temp=head=newnode;
		}
		else{
			temp->link=newnode;
			temp=newnode;
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Elements of linked list are:\n";
	display();
	cout<<"\nElements of linked list after sorting\n";
	sort();
	display();
}
void display(){
	node *temp;
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
}
void sort(){
	node *t1,*t2;
	int d;
	for(t1=head;t1->link!=0;t1=t1->link){
		for(t2=head;t2->link!=0;t2=t2->link){
			if((t2->data)>(t2->link->data)){
				d=t2->data;
				t2->data=t2->link->data;
				t2->link->data=d;
			}
		}
	}
//		node *temp;
//	temp=head;
//	while(temp!=0){
//		cout<<temp->data<<" ";
//		temp=temp->link;
//	}
	
}
