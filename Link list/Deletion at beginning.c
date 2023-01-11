#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
 struct node *head,*newnode,*temp,*fnode;
 int size,i;
 	printf("Enter size of node\n");
 	scanf("%d",&size);
 	fnode=(struct node*)malloc(sizeof(struct node));
 	printf("Enter the value of node\n");
 	scanf("%d",&fnode->data);
	temp=head=fnode;
 	for(i=2;i<=size;i++){
 		newnode=(struct node*)malloc(sizeof(struct node));
 		printf("Enter the value of node %d\n",i);
 		scanf("%d",&newnode->data);
 		temp->link=newnode;
 		temp=temp->link;
	 }
 	temp=head;
 	for(i=1;i<=size;i++){
 		printf("The value of node %d is: ",i);
 		printf("%d \n",temp->data);
 		temp=temp->link;
	 }
	 printf("After deleting the first node\n");
	 head=fnode->link;
	 free(fnode);
	 temp=head;
	 for(i=1;i<size;i++){
 		printf("The value of node %d is: ",i);
 		printf("%d \n",temp->data);
 		temp=temp->link;
	 }
}
