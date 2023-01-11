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
struct node *root=NULL,*newnode,*prev;
int max(int a, int b){
	if(a>b)
	return a;
	return b;
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
	cout<<"hello right\n";
	struct node* x=y->left;
	struct node* T2=x->right;
	x->right=y;
	y->left=T2;
	y->height=max(getHeight(y->right),getHeight(y->left))+1;
	x->height=max(getHeight(y->right),getHeight(y->left))+1;
	return x;
}
struct node* Leftrotate(struct node* x){
	cout<<"hello left\n";
	struct node* y=x->right;
	struct node* T2=y->left;
	y->left=x;
	x->right=T2;
	y->height=max(getHeight(y->right),getHeight(y->left))+1;
	x->height=max(getHeight(y->right),getHeight(y->left))+1;
	return y;
}
struct node* insert(struct node * parent,int key){
	if(parent==NULL){
		struct node* newnode=new node;
		newnode->height=1;
		newnode->data=key;
		newnode->left=NULL;
		newnode->right=NULL;
		root=newnode;
		return root;
	}
	if(key<parent->data){
		parent->left=insert(parent->left,key);
	}
	else if(key>parent->data){
		parent->right=insert(parent->right,key);
	}
	parent->height=1+max(getHeight(parent->left),getHeight(parent->right));
//	return root;
	int bf=getBalanceFactor(parent);
	//	cout<<"Balance factor: "<<bf<<" parent data "<<parent->data<<endl;
	//Left- Left case
//	cout<<"\nRoot data "<<parent->data<<" parent height "<<parent->height<<endl;
//	cout << parent->left->data << ":" << parent->right->data << endl;
//	cout << parent->left->height << ":" << parent->right->height << endl;
//	if(bf>1 && key<parent->left->data){
//		parent = Rightrotate(parent);
//	}
//	//Right- Right case
	if(bf<-1 ){
		parent = Leftrotate(parent);
	}
//	//Left- Right case
		if(bf>1 ){
			//	parent->left=Leftrotate(parent->left);
		       parent=Rightrotate(parent);
	}
//	//Right - Left case
//		if(bf<-1 && key<parent->right->data){
//			parent->right=Rightrotate(parent->right);
//		Leftrotate(parent);
//	}
	return parent;
}
void inorder(struct node* root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";	
		inorder(root->right);
	}
}
int main(){
	//root=create();
	int key,choice=1;
	struct node *temp = root;
	while(key!=-1){
		cout<<"Enter value to insert (-1 for exit)\n";
		cin>>key;
		if(key==-1){
			break;
		}
		root=insert(root,key);		
	}	
//	cout<<"Root value "<<root->data<<" root height "<<root->height<<endl;
//	cout<<"Inorder traversal after insertion\n";	
//	inorder(root);
//	cout<<"\nEnter value to insert in the already created tree\n";
//	cin>>key;
//	root=insert(root,key);
//	cout<<"Inorder traversal after insertion in already created tree\n";	
//	inorder(root);
//	int bf=getBalanceFactor(root);
	cout<<"\nBalance factor: "<<getBalanceFactor(root)<<endl;
//	cout<<"\nEnter value to insert\n";s
//	cin>>key;
//	root=insert(root,key);
//	cout<<"Inorder traversal after insertion of "<<key<<"\n";	
//	inorder(root);

//	if(bf>1 ){
//	//	cout << "Verified\n";
//			//	parent->left=Leftrotate(parent->left);
//		       root = Rightrotate(root);
//	}	
//	cout<<"Inorder traversal after insertion in already created tree after rotation\n";	
//	inorder(root);
//cout<<"Root data"<<root->data<<"   height "<<root->height<<endl;
//cout<<"Root right data"<<root->right->data<<"   height "<<root->right->height<<endl;
		cout<<"Nodes of Tree are:\n";
	inorder(root);
	cout<<"Balance factor of root node "<<getBalanceFactor(root)<<endl;
	cout<<"Root height "<<getHeight(root)<<endl;
	cout<<"Root data "<<root->data;
	cout<<"\nEnter value to insert in already created Tree\n";
	cin>>key;
	root=insert(root,key);
	cout<<"Tree after insertion of "<<key<<endl;
	inorder(root);
	cout<<"Balance factor of root node "<<getBalanceFactor(root)<<endl;
	cout<<"Root height "<<getHeight(root)<<endl;
	cout<<"Root data "<<root->data;
	return 0;
}
