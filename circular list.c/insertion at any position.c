#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head,*newnode,*temp,*tail,*prenode;
	int size,i,loc;
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
	printf("Value of each node is:\n");
	temp=head;
	for(i=1;i<=size;i++){
		printf("Node %d = %d\n",i,temp->data);
		prenode=temp;
		temp=temp->link;		
	}
	printf("Enter the location where to insert a node\n");
	scanf("%d",&loc);
	i=1;
	temp=head;
	while(i<loc){
		prenode=temp;
		temp=temp->link;
		i++;
	}
	printf("Enter the value of node to be inserted\n");
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	newnode->link=prenode->link;
	prenode->link=newnode;	
	printf("After inserting the node at the position %d\n",loc);
	temp=head;
	for(i=1;i<=size+1;i++){
		printf("Node %d = %d\n",i,temp->data);
		temp=temp->link;		
	} 
}
