#include<stdio.h>//deletion from specified position
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
 struct node *head,*newnode,*temp,*fnode,*pretemp,*nexttemp;
 int size,i,loc;
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
	 printf("Enter the location whose value you want to delete\n");
	 scanf("%d",&loc);
	 printf("After deleting the node  %d\n",loc);
	 newnode=(struct node*)malloc(sizeof(struct node));
	 temp=head;
	 i=1;
		 while(i<loc-1){
		 	temp=temp->link;
		 	i++;
		 }
		 nexttemp=temp->link;
		 temp->link=nexttemp->link;
		 free(nexttemp);
		 
	 temp=head;
	 for(i=1;i<size;i++){
 		printf("The value of node %d is: ",i);
 		printf("%d \n",temp->data);
 		temp=temp->link;
	 }
}
