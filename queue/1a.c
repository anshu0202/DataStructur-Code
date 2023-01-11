#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
	struct node *front=0,*temp,*tail=0,*newnode;
	int enqueue(int );
	int display();
	int dequeue();
	int peek();
int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	display();
	peek();
	dequeue();
	display();
	enqueue(21);
	enqueue(32);
	display();
	peek();
	dequeue();
	peek();
	display();
}
int  enqueue(int x){
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->link=0;
	if(front==0 && tail==0){
		front=tail=newnode;
	}
	else{
		tail->link=newnode;
		tail=newnode;
	}
}
int dequeue(){
	temp=front->link;
	printf("dequeue element is %d\n",front->data);
	free(front);
	front=temp;
}
int display(){
	temp=front;
	while(temp!=0){
		printf("%d\t",temp->data);
		temp=temp->link;
	}
	printf("\n");
}
int peek(){
	if(front==0){
		printf("underflow condition\n");
	}
	else{
	printf("%d is peek element\n",front->data);
}
}

