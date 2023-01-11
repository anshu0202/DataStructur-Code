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
	printf("%d ",head->data);
	return 0;
}
