#include<iostream>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
node *head=NULL,*newnode,*templ,*tempr,*temp;
void set_left(){
	char sel;
	cout<<"Do you want to enter left child value(y=yes & n= no)?\n";
	cin>>sel;
	if(sel=='y'){
		newnode= new node;
		newnode->left=NULL;
		newnode->right=NULL;
			temp->left=newnode;
		cout<<"Enter left child value\n";
		cin>>newnode->data;
	}
	else{
			cin>>newnode->data=NULL;
	}
}
void set_right(){
	char sel;
	cout<<"Do you want to enter right child value(y=yes & n= no)?\n";
	cin>>sel;
	if(sel=='y'){
			newnode= new node;
		newnode->left=NULL;
		newnode->right=NULL;
		temp->right=newnode;
		cout<<"Enter right child value\n";
		cin>>newnode->data;
	}
	else{
			cin>>newnode->data=NULL;
	}
}
int main(){
	char choice='y';
	newnode=new node;
	cout<<"Enter the value of root node\n";
	cin>>newnode->data;
	newnode->left=NULL;
	newnode->right=NULL;
	head=temp=newnode;
	while(choice='y'){
		set_left();
		templ->left=newnode;
		set_right();
		tempr->right=newnode;
		cout<<"Do you want to continue (y=yes & n=no)?\n";
		cin>>choice;
		templ=temp->left;
		tempr=temp->right;	
	}
	return 0;
}
