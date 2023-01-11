#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *pnode;
	struct node *nnode;
};
int main(){
	struct node *head,*newnode,*temp,*fnode;
	int size,i;
	printf("Enter the size of list\n");
	scanf("%d",&size);
	fnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value of node 1\n");
	scanf("%d",&fnode->data);
	fnode->pnode=0;
	temp=head=fnode;
	for(i=1;i<size;i++){
		printf("Enter the value of node %d\n",i+1);
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		temp->nnode=newnode;
		newnode->pnode=temp;
		newnode->nnode=0;
		temp=temp->nnode;
	}
	printf("Enter value are:\n");
	temp=fnode;
	for(i=1;i<=size;i++){
		printf("Value of node %d = %d\n",i,temp->data);
		temp=temp->nnode;
	}
	temp=head;
	while(temp->nnode!=0){
		temp=temp->nnode;
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter value to be placed at end\n");
	scanf("%d",&newnode->data);
	newnode->nnode=0;
	temp->nnode=newnode;
		printf("After inserting a node at end\n");
		temp=head;
	for(i=1;i<=size+1;i++){
		printf("Value of node %d = %d\n",i,temp->data);
		temp=temp->nnode;
	}
}
