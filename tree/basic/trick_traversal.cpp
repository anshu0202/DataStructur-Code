#include<iostream>// preorder traversal
using namespace std;//only theory is there
struct node{
	int data;
	node *left,*right;
};
struct node* create();
void preorder(struct node*);
struct node *root=NULL,*newnode;
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
void preorder(struct node* root){
	if(root!=NULL){
		cout<<root->data<<" ";
			preorder(root->left);
			preorder(root->right);
	}
}
int main(){
	root=create();
	cout<<"Elements of tree are:\n";
	preorder(root);
	return 0;
}
