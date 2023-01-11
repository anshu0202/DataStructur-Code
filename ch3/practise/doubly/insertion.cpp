#include<iostream>
using namespace std;
struct node{
	int data;
	node *plink,*nlink;
};
node *head=0,*tail;
void display();
void insert_beg();
void insert_last();
void insert(int);
int main(){
	node *newnode,*temp;
	int choice=1,loc,count=0;
	while(choice){
		newnode=new node;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		newnode->nlink=NULL;
		if(head==0){
			head=temp=tail=newnode;
			newnode->plink=NULL;
		}
		else{
			temp->nlink=newnode;
			newnode->plink=temp;
			temp=tail=newnode;
		}
		++count;
		cout<<"Do you want to continue(0,1)\n";
		cin>>choice;		
	}
	cout<<"Toatal no. of node created "<<count<<"\n";
	cout<<"Elements of linked list are :\n";
	display();
	cout<<"\n**********************************************************\n";
	cout<<"Enter location where to insert\n";
	cin>>loc;
	if(loc==1){
		insert_beg();
		cout<<"Elements of linked list after inserting at the beginning\n";
		display();
	}
	else if(loc==count+1){
		insert_last();
			cout<<"Elements of linked list after inserting a node at the end\n";
		display();
	}
	else if(loc>1 && loc<=count){
		insert(loc);
		cout<<"Elements of linked list after inserting a node at location "<<loc<<"\n";
		display();
	}
	else{
		cout<<"Invalid location\n";
	}
}
void display(){
	node *temp;
	temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->nlink;
	}
}
void insert_beg(){
	node *newnode;
	newnode= new node;
	cout<<"Enter value to insert\n";
	cin>>newnode->data;
	newnode->plink=NULL;
	newnode->nlink=head;
	head->plink=newnode;
	head=newnode;
}
void insert_last(){
	node *newnode;
	cout<<"Enter value to insert at the end\n";
	newnode= new node;
	cin>>newnode->data;
	newnode->nlink=NULL;
	newnode->plink=tail;
	tail->nlink=newnode;
	tail=newnode;
}
void insert(int loc){
	node *newnode,*temp;
	int i=1;
	temp=head;
	while(i<loc-1){
	temp=temp->nlink;
	i++;
	}
	cout<<"Enter value to insert\n";
	newnode=new node;
	cin>>newnode->data;
	newnode->nlink=temp->nlink;
	newnode->plink=temp;
	temp->nlink->plink=newnode;
	temp->nlink=newnode;
}
