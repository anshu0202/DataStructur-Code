#include<iostream>
using namespace std;
struct node{
	int data;
	node *plink,*nlink;
};
node *head=0,*tail;
void display();
void del_beg();
void del_last();
void del(int);
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
	cout<<"Enter location where node is to be deleted\n";
	cin>>loc;
	if(loc==1){
		del_beg();
		cout<<"Elements of linked list after deleting the first node\n";
		display();
	}
	else if(loc==count){
		del_last();
			cout<<"Elements of linked list after deletingthe last node \n";
		display();
	}
	else if(loc>1 && loc<=count){
		del(loc);
		cout<<"Elements of linked list after deleting the node at location "<<loc<<"\n";
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
void del_beg(){
	node *temp;
	temp=head;
	head->nlink->plink=NULL;
	delete(head);
	head=temp->nlink;
}
void del_last(){
	node *temp;
	temp=tail->plink;
	tail->plink->nlink=NULL;
	delete(tail);
	tail=temp;
}
void del(int loc){
	node *newnode,*temp;
	int i=1;
	temp=head;
	while(i<loc){
	temp=temp->nlink;
	i++;
	}
		temp->plink->nlink=temp->nlink;
		temp->nlink->plink=temp->plink;
		delete(temp);
}
