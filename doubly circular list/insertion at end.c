#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *nlink,*plink;
};
int main(){
	struct node *head,*newnode,*temp,*prenode,*nxtnode,*tail;
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
	printf("Enter the value to insert at the end\n");
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);	
	tail->nlink=newnode;
	newnode->plink=tail;
	head->plink=newnode;
	newnode->nlink=head;
	tail=newnode;
	printf("%d\n",tail->data);
	printf("%d\n",tail->nlink->data);
	printf("List after adding a node at the end\n");
	temp=head;
	for(i=1;i<=size+1;i++){
		printf("Value of node %d = %d\n",i,temp->data);
		temp=temp->nlink;
	}
	}
