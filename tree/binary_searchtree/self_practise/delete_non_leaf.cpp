#include<iostream>// middle having two node
using namespace std;
struct node{
	int data;
	struct node *left,*right;
};
struct node *root=NULL,*prev;
void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<"  ";
		inorder(root->right);
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
struct node* delete_node(struct node *root,int key){
	if(root->data==key ){
				if(root->left!=NULL && root->right!=NULL){
					cout<<"Previous data = "<<prev->data<<endl;
				prev->right=root->left;
				root->left->right=root->right;
				root=root->left;
				return root;
			}
			else if(root->left!=NULL){
				cout<<"Previous data is "<<prev->data<<endl;
				prev->left=root->left;
				root->left->right=root->right;
				root=root->left;
				return root;
			}
			else if(root->right!=NULL){
				prev->left=root->right;
				root->right->left=root->left;
				root=root->right;
				return root;
			}			
	}
	else if(root->data>key){
		prev=root;
		root->left=delete_node(root->left,key);
	}
	else if(root->data<key){
		prev=root;
		root->right=delete_node(root->right,key);
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
	cout<<"Enter value to delete\n";
	cin>>key;
	root=delete_node(root,key);
	cout<<"Element of Tree after deleting "<<key<<endl;
	inorder(root);
	return 0;
}
