#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *pnode;
	struct node *nnode;
};
int main(){
	struct node *head,*newnode,*temp,*fnode,*nxtnode,*tail;
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
	temp=head;
	
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
	tail=temp;
	temp=head;
	while(temp!=0){
		nxtnode=temp->nnode;
		temp->nnode=temp->pnode;
		temp->pnode=nxtnode;
		temp=nxtnode;
		}
		temp=head;
	head=tail;
	tail=temp;
	printf("After reversing the list\n");
	temp=head;
	for(i=1;i<=size;i++){
		printf("Value of node %d = %d\n",i,temp->data);
		temp=temp->nnode;
	}
}
