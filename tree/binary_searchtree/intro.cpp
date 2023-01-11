#include<iostream>//  searching in BST
using namespace std;
struct node* create();
int isBST(struct node *root);
void inorder(struct node* );
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
void inorder(struct node *root){
	if(root!=NULL){
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
}
int isBST(struct node *root){
	static struct node *prev=NULL;
	if(root!=NULL){
		if(!isBST(root->left)){
			return 0;
		}
		if(prev!=NULL && root->data < prev->data){
			return 0;
		}
		prev=root;
		return isBST(root->right);
	}
	else{
		return 1;	
		}
}
int main(){
	root=create();	
       inorder(root);
       cout<<endl;
       int x=(isBST(root));
       if(x==1)
       cout<<"The tree is BST\n";
       else
       cout<<"The tree is not BST\n";
	return 0;
}
