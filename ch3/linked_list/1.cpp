#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
int main(){
	struct	node *newnode,*temp,*head;
	head=0;
	int choice=1;
	while(choice){
		newnode=new node;
		newnode->link=0;
		cout<<"Enter the value of node\n";
		cin>>newnode->data;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->link=newnode;
			temp=newnode;
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	} 
	cout<<"The elements of node are:\n";
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
}
