#include<iostream>
using namespace std;
/*
Two basic operations are :
1)Left rotate wrt to a node->Node is moved towadrs the left
2)Right rotate wrt to a node->Node is moved towadrs the right
*/
struct node{
	int data,height;
	node *left,*right;
};
struct node* create();
int getHeight(struct node *n);
struct node *root=NULL,*newnode;
int max(int a, int b){
	if(a>b)
	return a;
	return b;
}
struct node* create(){
	struct node *newnode;
	newnode=new node;
	cout<<"Enter data (-1 for no node)\n";
	cin>>newnode->data;
	newnode->height=0;
	if(newnode->data==-1){
		return NULL;
	}
	cout<<"Enter left child of "<<newnode->data<<endl;
	newnode->left=create();
	cout<<"Enter right child of "<<newnode->data<<endl;
	newnode->right=create();
	return newnode;
}
int getHeight(struct node *n){
	if(n==NULL){
		return 0;
	}
	return n->height;
}
int getBalanceFactor(struct node *n){
	if(n==NULL){
		return 0;
	}
	return ((getHeight(n->left))-(getHeight(n->right)));
}
struct node* Rightrotate(struct node* y){
	struct node* x=y->left;
	struct node* T2=x->right;
	x->right=y;
	y->left=T2;
	y->height=max(getHeight(y->right),getHeight(y->left))+1;
	x->height=max(getHeight(y->right),getHeight(y->left))+1;
	return x;
}
struct node* Leftrotate(struct node* x){
	struct node* y=x->right;
	struct node* T2=y->left;
	y->left=x;
	x->right=T2;
	y->height=max(getHeight(y->right),getHeight(y->left))+1;
	x->height=max(getHeight(y->right),getHeight(y->left))+1;
	return y;
}
struct node* createnew(int key){
	struct node* newnode=new node;
		newnode->height=0;
		newnode->data=key;
		newnode->left=NULL;
		newnode->right=NULL;
		root=newnode;
		return root;
}
struct node* insert(struct node * root,int key){
	if(root==NULL){
//		struct node* newnode=new node;
//		newnode->height=1;
//		newnode->data=key;
//		newnode->left=NULL;
//		newnode->right=NULL;
//		root=newnode;
		return createnew(key);
	}
	if(key<root->data){
		root->left=insert(root->left,key);
	//	return insert(root->left,key);
	}
	else if(key>root->data){
		root->right=insert(root->right,key);
		//	return insert(root->right,key);
	}
	//return root;
	root->height=1+max(getHeight(root->left),getHeight(root->right));
//	return root;
	int bf=getBalanceFactor(root);
	//Left- Left case
	if(bf>1 && key<root->left->data){
		root = Rightrotate(root);
	}
	//Right- Right case
	if(bf<-1 && key>root->right->data){
		root = Leftrotate(root);
	}
	//Left- Right case
		if(bf>1 && key>root->left->data){
				root->left=Leftrotate(root->left);
		       Rightrotate(root);
	}
	//Right - Left case
		if(bf<-1 && key<root->right->data){
			root->right=Rightrotate(root->right);
		Leftrotate(root);
	}
	return root;
}
void inorder(struct node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";	
		inorder(root->right);
	}
}
int main(){
	root=create();
	int key;
	cout<<"Inorder traversal before insertion\n";	
	inorder(root);
	cout<<"\nEnter value to insert\n";
	cin>>key;
	root=insert(root,key);
	cout<<"Inorder traversal after insertion of "<<key<<"\n";	
	inorder(root);
	return 0;
}
