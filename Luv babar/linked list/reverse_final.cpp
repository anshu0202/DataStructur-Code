#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
int main(){
	node *temp,*newnode,*head=0;
	int choice=1,size;
	while(choice){	
		newnode=new node;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		if(head==0){
			head=temp=newnode;
			temp->link=0;
		}
		else{
			temp->link=newnode;
			temp=newnode;
			temp->link=0;
		}
		cout<<"Do u want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Elements of list are :\n";
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<"Enter size to reverse\n";
	cin>>size;	
}
