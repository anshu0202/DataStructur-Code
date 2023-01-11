#include<iostream>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
 node* root=0;
 node* create(struct node*);
void preorder(struct node *parent){
	if(root!=0){
		cout<<parent->data<<" ";
		preorder(parent->left);
		preorder(parent->right);
	}
}
struct node*  create(){
	 node *newnode;
	newnode= new node;
	cout<<"Enter value of node (-1 for no child)\n";
	cin>>newnode->data;
	if(newnode->data==-1){
		return 0;
	}
	else{
		cout<<"Enter left child of "<<newnode->data<<endl;
		newnode->left=create();
		cout<<"Enter Right child of "<<newnode->data<<endl;
		newnode->right=create();
	}
	return newnode;
} 
int main(){
	struct node *root=0;
	root=create();
	cout<<"Elements of Tree are\n";
	preorder(root);
}
