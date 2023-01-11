#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head,*newnode,*temp,*tail;
	int size,i;
	printf("Enter size of list\n");
	scanf("%d",&size);
	printf("Enter the value of node 1\n");
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	temp=head=newnode;
	for(i=1;i<size;i++){
		printf("Enter the value of node %d\n",i+1);
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		temp->link=newnode;
		temp=newnode;
	}
	tail=temp;
	tail->link=head;
	printf("Value of each node is:\n");
	temp=head;
	for(i=1;i<=size;i++){
		printf("Node %d = %d\n",i,temp->data);
		temp=temp->link;		
	}
}
