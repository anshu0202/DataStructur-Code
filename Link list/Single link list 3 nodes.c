#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head = NULL;
	head=(struct node *)malloc(sizeof(struct node));
	printf("Enter the value of 1st node\n");
	scanf("%d",&head->data);
	head->link =NULL;
	printf("%d \n",head->data);
	struct node *current =(struct node*)malloc(sizeof(struct node));
	current->data=78;
	current->link=NULL;
	head->link=current;
	printf("%d\n",current->data);
	current =(struct node*)malloc(sizeof(struct node));
	current->data=780;
	current->link=NULL;
	head->link->link=current;
	printf("%d\n",current->data);
	return 0;
}
