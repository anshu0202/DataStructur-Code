#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *right,*left;
};
struct node *create();
int main(){
	struct node *root=0;
	root=create();
}
struct node *create(){
	struct node *newnode;
	int x;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter value (-1 for no node)\n");
	scanf("%d",&x);
	if(x==-1){
		return 0;
	}
	else{
	newnode->data=x;	
	printf("enter the left child of %d\n",x);
	newnode->left=create(); 
	printf("enter right child of %d\n",x);
	newnode->right=create();
	return newnode; 
	}	
}
