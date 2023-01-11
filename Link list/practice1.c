#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *ads;
};
int main(){
    struct node *head=0;
	head=(struct node*)malloc(sizeof(struct node));
	printf("Enter value of 1st node\n");
	scanf("%d",&head->data);
	printf("%d",head->data);
}

