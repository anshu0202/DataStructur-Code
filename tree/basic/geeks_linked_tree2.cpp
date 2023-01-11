#include<iostream>
using namespace std;
struct node* create();
struct node{
	int data;
	node *left,*right;
};
int print();
node *root=NULL,*newnode,*temp;
struct node* create(){
	int x;
	struct node *newnode;
	newnode= new node;
	cout<<"Enter data(-1 for no node): ";
	cin>>newnode->data;
	if(newnode->data==-1){
		return 0;
	}
	cout<<"Do you want to create left child of "<<newnode->data<<endl;
	newnode->left=create();
	cout<<"Do you want to create right child of "<<newnode->data<<endl;
	newnode->right=create();
	return newnode;
}
int main(){
	root=create();
	cout<<"Elements of tree are:\n";
	temp=root;
	print();
	return 0;
}
int print(){
	int x;
	if(temp->data==-1){
		cout<<"No child node\n";
		return 0;
	}
	else{
	cout<<temp->data<<" child--->";
	temp=temp->left;
	x=print();
	if(x==0){
		temp=temp->right;
	}
}	
}
