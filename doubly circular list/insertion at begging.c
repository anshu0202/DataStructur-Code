#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *nlink,*plink;
};
int main(){
	struct node *head,*newnode,*temp,*tail;
	int size,i;
	printf("Enter the size of list\n");
	scanf("%d",&size);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value of the node 1\n");
	scanf("%d",&newnode->data);
	tail=head=newnode;
	for(i=1;i<size;i++){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value of the node %d\n",i+1);
	scanf("%d",&newnode->data);	
	tail->nlink=newnode;
	newnode->plink=tail;
	newnode->nlink=head;
	head->plink=newnode;
	tail=newnode;
}
printf("%d \n",tail->data);
	printf("Enter value are:\n");
	temp=head;
	for(i=1;i<=size;i++){
		printf("Value of node %d = %d\n",i,temp->data);
		temp=temp->nlink;
	}
	printf("Enter the value the node to  insert at the begginning\n");
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->nlink=head;
	head->plink=newnode;
	tail->nlink=newnode;
	newnode->plink=tail;
	head=newnode;
	printf("%d\n",tail->data);
	printf("%d\n",tail->nlink->data);
	printf("After inserting a node at beggining\n");
	temp=head;
	for(i=1;i<=size+1;i++){
		printf("Value of node %d = %d\n",i,temp->data);
		temp=temp->nlink;
	}
	}
