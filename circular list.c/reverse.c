#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head,*newnode,*temp,*tail,*prenode,*nxtnode;
	int size,i;
	printf("Enter size of list\n");
	scanf("%d",&size);
	printf("Enter the value of node 1\n");
	newnode=(struct node*)malloc(sizeof(struct node));
	scanf("%d",&newnode->data);
	temp=head=newnode;
	for(i=1;i<size;i++){
		printf("Enter the value of node %d\n",i+1);
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		temp->link=newnode;
		temp=newnode;
	}
	tail=temp;
	tail->link=head;
	printf("Value of each node is:\n");
	temp=head;
	for(i=1;i<=size;i++){
		printf("Node %d = %d\n",i,temp->data);
		prenode=temp;
		temp=temp->link;		
	}
//		printf("%d\n",temp->link);
	temp=head;
//	printf("%d\n",temp->data);
//	printf("%d\n",tail->data);
//		printf("%d\n",tail);
//		printf("%d\n",head);
	while(temp!=tail){
		prenode=temp;
		temp=nxtnode;
		nxtnode=temp->link; 
		temp->link=prenode;
		printf("hi");
	}
//	for(i=1;i<=size;i++){
//		prenode=temp;
//		nxtnode=temp->link;
//		nxtnode->link=temp;
//		temp->link=prenode;
//		temp=temp->link;
//	}
	nxtnode->link=tail;
      tail=nxtnode;
	temp=head;
	printf("After reversing the list\n");
	for(i=1;i<=size;i++){
		printf("Node %d = %d\n",i,temp->data);
		temp=temp->link;		
	}
}
