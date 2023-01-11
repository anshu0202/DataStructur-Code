#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *pnode;
	struct node *nnode;
};
int main(){
	struct node *head,*newnode,*temp,*fnode,*lnode,*temp2;
	int size,i,loc;
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
	printf("Enter the location which is to delete\n");
	scanf("%d",&loc);
		temp=head;
	     i=1;
	while(i<loc){
		temp=temp->nnode;
		i++;
	}
	temp->pnode->nnode=temp->nnode;
	temp->nnode->pnode=temp->pnode;
	free(temp);
	temp=NULL;
		printf("After deleting the node at location %d\n",loc);
		temp=head;
	for(i=1;i<=size+1;i++){
		printf("Value of node %d = %d\n",i,temp->data);
		temp=temp->nnode;
	}
}
