#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head,*newnode,*temp;
	int choice=1;
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
	
	return 0;
}
