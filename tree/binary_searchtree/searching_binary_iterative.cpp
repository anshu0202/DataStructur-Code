#include<iostream>//iterative search
using namespace std;
struct node{
	int data;
	node *left,*right;
};
struct node* create();
struct node* search(int ,struct node*);
struct node *root=NULL,*newnode;
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
struct node*  search(int x,struct node* root){
	while(root!=NULL){
		if(root->data==x){
			return root;
		}
		else if(x<root->data){
			root=root->left;
		}
		else if(x>root->data){
			root=root->right;
		}
	}
	return NULL;
}
int main(){
	int x;
	root=create();
	cout<<"Enter the value to search in the BST\n";
	cin>>x;
	struct node* ret = search(x,root);
	if(ret!=NULL){
		cout<<x<<" is present in the BST tree\n";
	}
	else{
		cout<<"Element not found in the BST\n";
	}
	return 0;
}
