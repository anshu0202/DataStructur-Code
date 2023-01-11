#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left,*right;
};
struct node* root=NULL;
void inorder(struct node* root){
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
	else if(key<root->data){
		root->left=insert(root->left,key);
	}
	else if(key>root->data){
		root->right=insert(root->right,key);
	}
	return root;
}
int main(){
	int  key;
	while(key!=-1){
		cout<<"Enter value to insert (-1 to exit)\n";
		cin>>key;
		if(key==-1){
			break;
		}
	root=insert(root,key);
	}
	cout<<"Nodes of Tree are:\n";
	inorder(root);
	cout<<"\nEnter value to insert in already created Tree\n";
	cin>>key;
	root=insert(root,key);
	cout<<"Tree after insertion of "<<key<<endl;
	inorder(root);
	return 0;
}
