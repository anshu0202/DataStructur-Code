#include<iostream>// postorder traversal
using namespace std;
struct node{
	int data;
	node *left,*right;
};
struct node* create();
void postorder(struct node*);
struct node *root=NULL,*newnode,*temp;
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
void postorder(struct node* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
    	cout<<root->data<<" ";	
	}
}
int main(){
	root=create();
	cout<<"Elements of tree are:\n";
	postorder(root);
	return 0;
}
