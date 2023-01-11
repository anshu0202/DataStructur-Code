#include<iostream>
using namespace std;
struct node{
	int data;
	struct node  *left,*right;
};
struct node *root=NULL,*parent;
void inorder(struct node *parent){
	if(parent!=NULL)
	{
		inorder(parent->left);
		cout<<parent->data<<"  ";
		inorder(parent->right);
	}
}
void create(int key){
	struct node *newnode;
	newnode=new node;
	newnode->data=key;
	newnode->left=NULL;
	newnode->right=NULL;
	if(root==NULL){
		root=parent=newnode;
	}
	else{	
	parent=root;
	while(parent->left!=NULL && parent->right!=NULL){
		if(parent->data>key){
			parent=parent->left;
		}
		else if(parent->data<key){
			parent=parent->right;
		}
	}
		if(parent->left==NULL || parent->right==NULL){
			if(parent->left==NULL && parent->right!=NULL && parent->data<key){
				parent=parent->right;
				if(parent->data>key){
			      parent->left=newnode;
	         	}
				else if(parent->data<key){
					parent->right=newnode;
					}
			}
			else if(parent->left!=NULL && parent->right==NULL && parent->data>key){
				parent=parent->left;
				if(parent->data>key){
			      parent->left=newnode;
	         	}
				else if(parent->data<key){
					parent->right=newnode;
					}
				}
				else{
						if(parent->data>key){
			             parent->left=newnode;
	         	}
				else if(parent->data<key){
				     	parent->right=newnode;
					}
				}
		}
	}	
}
int main(){
	int choice=1;
	while(choice!=-1){
		cout<<"Enter value to insert\n";
		cin>>choice;
		if(choice==-1){
			break;
		}
		create(choice);
	}
	cout<<"Elements of binary tree are:\n";
	inorder(root);
	return 0;
}
