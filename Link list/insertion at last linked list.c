#include<stdio.h>//Insertion at the end
#include<stdlib.h>
struct node{//Insertion at the end
	int data;
	struct node *link;
};
int main(){
	struct node *head,*newnode,*temp;
	int choice=1;//Insertion at the end
	head =0;
	while(choice){
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value of node\n");
	scanf("%d",&newnode->data);
	newnode->link =0;
	if(head==0){
		head=temp=newnode;
	}
	else{
		temp->link=newnode;
		temp=newnode;
	}
	printf("Do you want to continue(0,1)?\n");
	scanf("%d",&choice);
}
 	temp=head;
 	while(temp!=0){
 		printf("%d ",temp->data);
 		temp=temp->link;
	 }
	newnode=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the value to be placed in last node\n");
	scanf("%d",&newnode->data);
	newnode->link=0;//Insertion at the end
	temp=head;
	while(temp->link!=0){
		temp=temp->link;
	}
	temp->link=newnode;
	printf("Values of node after insertion at the last\n");
	temp=head;
 	while(temp!=0){//Insertion at the end
 		printf("%d ",temp->data);
 		temp=temp->link;
	 }
	return 0;
}
