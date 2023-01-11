#include<iostream>//recursive search
using namespace std;
struct node{
	int data;
	node *left,*right;
};
struct node* create();
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
void inOrder(node *root){
         if(root == 0){
             return;
         }
         
         preOrder(root->left);
         cout<<root->data<<" ";
         preOrder(root->right);
}
struct node*  insert(int x,struct node* root){
	if(root==NULL){
		newnode= new node;
		newnode->data=x;
		newnode->left=NULL;
		newnode->right=NULL;
		if(prev->data>x){
			prev->left=newnode;
		}
		else{
			prev->right=newnode;
		}
		cout<<x<<" is inserted\n";
		cout<<"Its parent node is "<<prev->data<<endl;
	}
	else if(root->data==x){
		cout<<x<<" cannot be inserted in the tree\n";
	}
	else if(root->data<x){
		prev=root;
		return insert(x,root->right);
	}
	else if(root->data>x){
		prev=root;
		return insert(x,root->left);
	}
}
int main(){  
	int x;
	root=create();
	cout<<"Elements of tree are:\n";
	inOrder(root);
	cout<<"Enter the value to insert in the BST\n";
	cin>>x;
	struct node* ret = insert(x,root);
	return 0;
}
