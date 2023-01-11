#include<iostream>// incomplete cannot print right child of tree
using namespace std;
struct node{
	int data;
	node *left,*right;
};
struct node* create();
struct node *root=NULL,*newnode,*temp,*ptemp;
struct node *create(){
	struct node *newnode;
	newnode= new node;
	cout<<"Enter data (-1 for no node)\n";
	cin>>newnode->data;
	if(newnode->data==-1){
		return 0;
	}
	cout<<"Enter left child of "<<newnode->data<<endl;
	newnode->left=create();
	cout<<"Enter right child of "<<newnode->data<<endl;
	newnode->right=create();
	return newnode;
}
struct node *print(){
	if(temp->data==-1){
		return ptemp;
	}
	else{
		cout<<temp->data<<" \n";
	}
	cout<<"Left child of "<<temp->data<<endl;
	ptemp=temp;
	temp=temp->left;
	temp=print();
	cout<<"Right child of "<<temp->data<<endl;
	ptemp=temp;
	temp=temp->right;
	temp=print();
	return temp;
}
int main(){
	root=create();
	cout<<"Elements of tree are:\n";
	temp=root;
	temp=print();
	return 0;
}
