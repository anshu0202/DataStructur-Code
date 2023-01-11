#include<stdio.h>
#define n 5
int queue[n],front=-1,rear=-1;
void dequeue();
void enqueue(int );
void peek();
void display();
int main(){
	dequeue();
	enqueue(100);
	enqueue(500);
    peek();
	display();
	//enqueue(30);
	dequeue();
	enqueue(60);
	 peek();
	 display();
}
void enqueue(int x){
	if(rear==n-1){
		printf("Queue is full\n");
	}
	else if(front==-1 && rear==-1){
	front=rear=0;
	queue[rear]=x;
	printf("%d is inserted\n",x);
  }
  else{
  	rear++;
  	queue[rear]=x;
  	printf("%d is inserted\n",x);
  }
}
void dequeue(){
	if(front==-1 && rear==-1){
		printf("queue is empty\n");
	}
	else if(front>rear){
		printf("queue is empty\n");
	}
	else if(front==rear){
		front=rear=-1;
		printf("queue is empty\n");
	}
	else{
		printf("dequeue element is %d\n",queue[front]);
		front++;
	}
}
void display(){
	int i;
	if(front==-1 && rear==-1){
		printf("Queue is empty\n");
	}
	else{
	for(i=front;i<=rear;i++){
	printf("value of queue %d is %d\n",i+1,queue[i]);
 }
}
}
void peek(){
	if(front==-1 && rear==-1){
		printf("Queue is empty\n");
	}
	else{	
	printf("Peek element is %d\n",queue[front]);
}
}
