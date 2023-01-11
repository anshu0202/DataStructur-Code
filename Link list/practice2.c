#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
 int main(){
 	struct node *head,*current;
 	head=(struct node*)malloc(sizeof(struct node));
 	printf("Enter value of 1st node\n");
 	scanf("%d",&head->data);
 	printf("%d \n",head->data);
 	current=(struct node*)malloc(sizeof(struct node));
 	head->link=current;
 	printf("Enter value of 2nd node\n");
 	scanf("%d",&head->data);
 	printf("%d \n",head->data);
 	
 }
