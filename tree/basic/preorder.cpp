#include<iostream>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
struct node* create();
void preorder(struct node*);
void postorder(struct node*);
void inorder(struct node* );
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
void inorder(struct node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<"  ";
		inorder(root->right);
	}
}
void preorder(struct node* root){
	if(root!=NULL){
		cout<<root->data<<" ";
			preorder(root->left);
			preorder(root->right);
	}
}
void postorder(struct node* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
    	cout<<root->data<<" ";	
	}
}
int main(){
	root=create();
	int sel;
	cout<<"Preorder traversal of tree are:\n";
	preorder(root);
	cout<<endl;
	cout<<"Inorder traversal of tree are:\n";
	inorder(root);
	cout<<endl;
	cout<<"Post traversal of tree are:\n";
	postorder(root);
	return 0;
}
