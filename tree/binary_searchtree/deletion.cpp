#include<iostream>//deleting the leaf node
using namespace std;
struct node{
	int data;
	node *left,*right;
};
struct node* create();
struct node*  delete_node(struct node*,int );
struct node* insert(int ,struct node*);
struct node *root=NULL,*newnode,*prev;
struct node* create(){
	struct node *newnode;
	newnode=new node;
	cout<<"Enter data (-1 for no node)\n";
	cin>>newnode->data;
	if(newnode->data==-1){
		return NULL;
	}
	cout<<"Enter left child of "<<newnode->data<<endl;
	newnode->left=create();
	cout<<"Enter right child of "<<newnode->data<<endl;
	newnode->right=create();
	return newnode;
}
struct node*  delete_node(struct node *root,int x){
			if(root==NULL){
		cout<<x<<" is not present in the tree\n";
	}	
	else if(root->data==x){
		cout<<x<<" is deleted its parent node is "<<prev->data<<endl;
		delete root;
		root=prev;
		return root;
	}
	else if(root->data<x){
		prev=root;
		return delete_node(root->right,x);
	}
	else if(root->data>x){
		prev=root;
		return delete_node(root->left,x);
	}
}
int main(){
	int x;
	root=create();
	cout<<"Enter the value to delete in the BST\n";
	cin>>x;
	struct node *r=delete_node(root,x);
	return 0;
}
