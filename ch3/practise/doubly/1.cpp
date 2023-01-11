#include<iostream>
using namespace std;
struct node{
	int data;
	node *plink,*nlink;
};
node *head=0;
void display();
int main(){
	node *newnode,*temp;
	int choice=1;
	while(choice){
		newnode=new node;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		newnode->nlink=0;
		if(head==0){
			head=temp=newnode;
			newnode->plink=0;
		}
		else{
			temp->nlink=newnode;
			newnode->plink=temp;
			temp=newnode;
		}
		cout<<"Do you want to continue(0,1)\n";
		cin>>choice;		
	}
	cout<<"Elements of linked list are :\n";
	display();
}
void display(){
	node *temp;
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->nlink;
	}
}
