#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
	struct node *head,*fnode,*temp,*newnode;
	int i;
	struct node enter_value(int );
	struct node show_list(int);
int main(){
	int size;
	printf("Enter the size of list\n");
	scanf("%d",&size);
	enter_value(size);
	show_list(size);
}
	struct node enter_value(int size){
		printf("Value of node 1\n");
		fnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&fnode->data);
		temp=head=fnode;
		for(i=1;i<size;i++){
			printf("Enter value of node %d\n",i+1);
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		temp=temp->link;
		}
	}
		struct node show_list(int size){
			temp=head;
			for(i=1;i<=size;i++){
				printf("Value of node %d = %d\n",i,temp->data);
				temp=temp->link;
			}
		}
