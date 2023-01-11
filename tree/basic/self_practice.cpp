#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *left,*right;
};
struct node *root=NULL;
void inorder(struct node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<"  ";
		inorder(root->right);
	}
}
//int isBST(struct node* root){
//	struct node* temp;
//	temp=root;
//	int flag=0;
//	while(root->left!=NULL){
//		if(root->data<root->left->data){
//			flag=1;
//			break;
//		}
//		else{
//			cout<<"Root data "<<root->data<<endl;
//			root=root->left;
//		}
//	}
//	if(flag==0){		
//	while(temp->right!=NULL){
//		if(temp->data>temp->right->data){
//			flag=1;
//			break;
//		}
//		else{
//			cout<<"Temp data "<<temp->data<<endl;
//			temp=temp->right;
//		}
//	}
//	}
//	return flag;
//}
int isBST(root){
	if(root==NULL){
		return 1;
	}
	if(root->data>root->left->data){
		int x=isBST(root->right);
	}
}
struct node* create(){
	struct node* newnode;
	newnode=new node;
	cout<<"Enter data(-1 for no node)\n";
	cin>>newnode->data;
	if(newnode->data==-1){
		return NULL;
	}
	cout<<"Enter value of left child of "<<newnode->data<<endl;
	newnode->left=create();
	cout<<"Enter value of right child of "<<newnode->data<<endl;
	newnode->right=create();
	return newnode;
}
int main(){
	root=create();
	cout<<"Inorder traversal of tree\n";
	inorder(root);
	int x=isBST(root);
	if(x==1){
		cout<<"\nTree is not BST";
	}
	else{
		cout<<"\nTree is BST";
	}
	return 0;
}
