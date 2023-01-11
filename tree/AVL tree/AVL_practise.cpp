#include<iostream>
using namespace std;
struct node{
	int data,height;
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
int getheight(struct node *root){
	if(root==NULL){
		return 0;
	}
	return root->height;
}
int max(int x,int y){
	if(x>y)
	return x;
	return y;
}
int Balancefactor(struct node *root){
	if(root==NULL)
		return 0;
		return (getheight(root->left)-getheight(root->right));
}
//struct node* rightrotate(struct node* root){
//	struct node  *x,*y;
//	cout<<"\nHello from right\n";
//	x=root->left;
//	y=root->left->right;
//	root->left->right=root;
//	root->left=y;
//	root=x;
//	root->height=1+max(getheight(root->left),getheight(root->right));
////	x->height=1+max(getheight(root->left),getheight(root->right));
//	return root;
//}
struct node* leftrotate(struct node* root){
	struct node  *x,*y;
	cout<<"\nHello from left\n";
	x=root->right;
	y=root->right->left;
	root->right->left=root;
	root->right=y;
	root=x;
	root->height=1+max(getheight(root->left),getheight(root->right));
	x->height=1+max(getheight(root->left),getheight(root->right));
	return root;
}
struct node* rightrotate(struct node* y){
	cout<<"hello right\n";
	struct node* x=y->left;
	struct node* T2=x->right;
	x->right=y;
	y->left=T2;
	y->height=max(getheight(y->right),getheight(y->left))+1;
	x->height=max(getheight(y->right),getheight(y->left))+1;
	return x;
}
struct node* insert(struct node* root,int key){
	if(root==NULL){
		struct node *newnode;
		newnode=new node;
	newnode->data=key;
	newnode->height=0;
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
	root->height=1+max(getheight(root->left),getheight(root->right));
	int bf=Balancefactor(root);
	if(bf>1){
		root=rightrotate(root);
	}
	if(bf<-1){
		root=leftrotate(root);
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
	cout<<"Balance factor of root node "<<Balancefactor(root)<<endl;
	cout<<"Root height "<<getheight(root)<<endl;
	cout<<"Root data "<<root->data;
	cout<<"\nEnter value to insert in already created Tree\n";
	cin>>key;
	root=insert(root,key);
	cout<<"Tree after insertion of "<<key<<endl;
	inorder(root);
	cout<<"Balance factor of root node "<<Balancefactor(root)<<endl;
	cout<<"Root height "<<getheight(root)<<endl;
	cout<<"Root data "<<root->data;
	return 0;
}
