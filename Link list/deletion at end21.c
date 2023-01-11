#include<stdio.h>//while loop se nhi bn rha h
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head,*newnode,*temp,*fnode,*prenode,*l;
	int size,i;
	printf("Enter the size of list\n");
	scanf("%d",&size);
	fnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value of node 1:\n");
	scanf("%d",&fnode->data);
	temp=head=fnode;
	for(i=1;i<size;i++){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the value of node %d:\n",i+1);
		scanf("%d",&newnode->data);
		temp->link=newnode;
		temp=newnode;
	}
	printf("The value of nodes of list are:\n");
	temp=head;
	for(i=1;i<=size;i++){
		printf("value of node %d = %d\n",i,temp->data);
		temp=temp->link;
	}
	temp=head;
//	if(head==NULL){
//		printf("List is already empty\n");
//	}
//	else if(head->link==NULL){
//		free(head);
//		head=NULL;
//	}
//	else{
//		prenode=head;
//		temp=head;
//		while(temp->link!=0){
//			prenode=temp;
//			temp=temp->link;
//			printf("hi");
//			
//		}
//		free(temp);
//		temp=NULL;		
	for(i=1;i<=size;i++){
		prenode=temp;
		temp=temp->link;		
	}
//	l=temp;
//	free(l); // nhii ho paa rha h
//	l=NULL;
	printf("Nodes of list after deleting the last node\n");
	temp=head;
	for(i=1;i<size;i++){
		printf("Value of node %d = %d\n",i,temp->data);
		temp=temp->link;
	}
	}
	
