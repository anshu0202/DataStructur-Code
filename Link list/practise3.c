#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
int main(){
	struct node *head=0,*current,*temp,*fnode;
	temp=head;
	int i;
	fnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter value of node 1 \n");
		scanf("%d",&fnode->data);
		head=temp=fnode;		
		fnode->link=0;		
	for(i=2;i<=3;i++){
	current=(struct node*)malloc(sizeof(struct node));
	printf("Enter value of node %d\n",i);
	scanf("%d",&current->data);
	current->link=0;
	if(i==1){
	fnode->link=current;
} 
else{
	temp->link=current;
	temp=current;
}
}
	temp=head;	
	for(i=1;i<=3;i++){
		printf("value = %d \t",temp->data);
		printf("Link = %d\t",temp->link);
		printf("Address = %d \n",temp);
		temp=temp->link;
	}
}
