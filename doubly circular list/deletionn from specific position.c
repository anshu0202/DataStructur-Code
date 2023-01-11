#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *nlink,*plink;
};
int main(){
	struct node *head,*newnode,*temp,*tail;
	int size,i,loc;
	printf("Enter the size of list\n");
	scanf("%d",&size);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value of the node 1\n");
	scanf("%d",&newnode->data);
	tail=head=newnode;
	for(i=1;i<size;i++){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the value of the node %d\n",i+1);
	scanf("%d",&newnode->data);	
	tail->nlink=newnode;
	newnode->plink=tail;
	newnode->nlink=head;
	head->plink=newnode;
	tail=newnode;
}
	printf("Enter value are:\n");
	temp=head;
	for(i=1;i<=size;i++){
		printf("Value of node %d = %d\n",i,temp->data);
		temp=temp->nlink;
	}
		printf("Enter the location whose value you want to delete\n");
		scanf("%d",&loc);
		if(loc>size){
			printf("Error location!\n");
		}
		else{
		
		temp=head;
		i=1;
		while(i<loc){
			temp=temp->nlink;
			i++;
		}
		temp->nlink->plink=temp->plink;
		temp->plink->nlink=temp->nlink;
		free(temp);
		temp=NULL;
		temp=head;
		printf("After deleting the node from %d \n",loc);
		for(i=1;i<size;i++){
		printf("Value of node %d = %d\n",i,temp->data);
		temp=temp->nlink;
	}
	}
	}

