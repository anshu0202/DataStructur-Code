#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head,*newnode,*temp,*tail,*prenode;
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
		prenode=temp;
		temp=temp->link;		
	}
	printf("Enter the value to be inserted at the end\n");
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->link=tail->link;
	prenode->link=newnode;
	tail->link=newnode; 
	temp=newnode; 
	printf("After inserting a node at the end\n");
	temp=head;
	for(i=1;i<=size+1;i++){
		printf("Node %d = %d\n",i,temp->data);
		temp=temp->link;		
	} 
	 
}
