#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left,*right;
};
struct node *root=NULL,*parent,*prev;
int key;
void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<"  ";
		inorder(root->right);
	}
}
void maximum(struct node* parent,int key){
	struct node *temp;
	temp=prev;
	while(parent->right!=NULL){
		temp=parent;
		parent=parent->right;
	}
	if(root->data==key){
		root->data=parent->data;
		temp->right=NULL;
		delete parent;
		parent=NULL;
	}
	else if(parent->left!=NULL && parent->right==NULL){
		prev->data=parent->data;
		prev->left->right=prev->right;
		prev->left=prev->left->left;
		delete parent;
		parent=NULL;
	}
		else if(parent->left==NULL && parent->right!=NULL){
		prev->data=parent->data;
		prev->left=prev->left->right;
		delete parent;
		parent=NULL;
	}
		else if(parent->left==NULL && parent->right==NULL && prev->data!=temp->data){
		prev->data=parent->data;
		temp->right=NULL;
		delete parent;
		parent=NULL;
	}
	else if(parent->left==NULL && parent->right==NULL && prev->data==temp->data){
		prev->data=parent->data;
		prev->left=NULL;
		delete parent;
		parent=NULL;
	}
}
struct node* insert(struct node* root,int key){
	if(root==NULL){
		struct node *newnode;
		newnode=new node;
		newnode->data=key;
		newnode->left=NULL;
		newnode->right=NULL;
		 return newnode;
	}
	if(root->data>key){
		root->left=insert(root->left,key);
	}
	else if(root->data<key){
		root->right=insert(root->right,key);
	}
}
void delete_node(struct node* parent,int key){
	if(parent->data==key){
	if(parent->left!=NULL && parent->right!=NULL){
		prev=parent;
		maximum(parent->left,key);		
	}
	else if(parent->left==NULL && parent->right==NULL && prev->right==NULL){
		prev->left=NULL;
		delete parent;
		parent=NULL;	
	}	
	else if(parent->left==NULL && parent->right==NULL){
		prev->right=NULL;
		delete parent;
		parent=NULL;	
	}		
	}
	else if(parent->data>key){
		prev=parent;
	delete_node(parent->left,key);
	}
	else if(parent->data<key){
			prev=parent;
		delete_node(parent->right,key);
	}
}
int main(){
	int key;
	while(key!=-1){
		cout<<"Enter value to insert (-1 to exit)\n";
		cin>>key;
		if(key==-1){
			break;
		}
		root=insert(root,key);
	}
	cout<<"Element of BST are:\n";
	inorder(root);
	cout<<"\nEnter value to delete\n";
	cin>>key;
	parent=root;
	delete_node(parent,key);
	cout<<"Element of Tree after deleting "<<key<<endl;
	inorder(root);
	return 0;
}
