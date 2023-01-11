#include<iostream>
using namespace std;
struct node* create();
void preorder(struct node* );
void inorder(struct node* );
void postorder(struct node* );
struct node{
	int data;
	struct node *left,*right;
};
struct node *root=NULL,*newnode;
struct node *create(){
	struct node* newnode;
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
void preorder(struct node *root){
	if(root!=NULL){
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
}
void postorder(struct node *root){
	if(root!=NULL){
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
}
void inorder(struct node *root){
	if(root!=NULL){
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
}
int main(){
	int sel;
	root=create();
//	cout<<"Enter 1 for preorder traversal\n";
//	cout<<"Enter 2 for inorder traversal\n";
//	cout<<"Enter 3 for postorder traversal\n";
//	cin>>sel;
//	switch(sel){
//		case 1: preorder(root);break;
//		case 2: inorder(root);break;
//		case 3: postorder(root);break;
//		default: cout<<"Select valid option\n";	
//	}
       preorder(root);
       cout<<endl;
       inorder(root);
        cout<<endl;
        postorder(root);
	return 0;
}
