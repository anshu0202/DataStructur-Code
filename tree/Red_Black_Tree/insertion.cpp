#include<iostream>//incomplete
using namespace std;
struct node{
	int data;
	string color;
	struct node *left,*right;
};
struct node *root=NULL,*parent=NULL;
void inorder(struct node *root){
	if(root!=NULL)
	{
		inorder(root->left);
		cout<<root->data<<"  ";
		cout<<root->color<<"  \n";
		inorder(root->right);
	}
}
struct node* insert(struct node* root,int key){
	if(parent==NULL && root==NULL){
		struct node* newnode;
		newnode->data=key;
		newnode->left=NULL;
		newnode->right=NULL;
		root=parent=newnode;
		newnode->color="black";
		return root;
	}
	else if(root==NULL && parent!=NULL){
		struct node* newnode;
		newnode->data=key;
		newnode->left=NULL;
		newnode->right=NULL;
		root=parent=newnode;
		newnode->color="red";
		return root;
	}
	if(root->data>key){
		root=insert(root->left,key);
	}
	else if(root->data<key){
		root=insert(root->right,key);
	}
	return root;
}
int main(){
	int key;
	while(key!=-1){
		cout<<"Enter value to insert(-1 to exit)\n";
		cin>>key;
		root=insert(root,key);
	}
	cout<<"Inorder traversal is:\n";
	inorder(root);
}
