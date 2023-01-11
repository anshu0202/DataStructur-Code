#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *top=0;
	struct node *newnode,*temp,*head;
int size;
void push(int );
void display();
void pop();
int main(){
	int i,size;	
	printf("Enter the size of list\n");
	scanf("%d",&size);
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter value of node\n");
	scanf("%d",&newnode->data);
	temp=head=newnode;
	for(i=1;i<size;i++){
		newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter value of node\n");
	scanf("%d",&newnode->data);
	temp->link=newnode;
		temp=newnode;
	}
	printf("Entered values are:\n");
	temp=head;
	for(i=1;i<=size;i++){
	printf("Value of node %d =",i);
	printf(" %d \n",temp->data);
	temp=temp->link;
	}
	push(2);
	push(3);	
	display();
	pop();
	printf("After popping\n");
    display();
    push(5);
	push(8);	
	display();
	pop();
		display();
		pop();
		display();
}
void push(int x){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	printf("%d is pushed\n",newnode->data);
	newnode->link=top;
	top=newnode;
}
void display(){
	int i;
	temp=top;
	if(top==0){
		printf("List is empty\n");
	}
	else{
		while(temp!=0){
		printf("pushed value = %d \n",temp->data);
		temp=temp->link;	
		}
	}
}
void pop(){
	temp=top;
	if(top==0){
		printf("List is empty\n");
	}
	else{
	
	top=top->link;
	free(temp);
	temp=NULL;
}
}

