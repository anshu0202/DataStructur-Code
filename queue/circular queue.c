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
  //  peek();
	display();
	enqueue(30);
	dequeue();
	enqueue(60);
		enqueue(160);
			enqueue(260);
	 peek();
	 display();
}
void enqueue(int x){
	 if(front==-1 && rear==-1){
	front=rear=0;
	queue[rear]=x;
	printf("%d is inserted\n",x);
  }
  else if((rear+1)%n==front){
  	printf("queue is full\n");
  }
  else{
  	rear=(rear+1)%n;
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
//	else if(front==rear){
//		front=rear=-1;
//		printf("queue is empty\n");
//	}
	else{
		printf("dequeue element is %d\n",queue[front]);
		front=(front+1)%n;
	}
}
void display(){
	int i=front;
	if(front==-1 && rear==-1){
		printf("Queue is empty\n");
	}
	else{
	while(i!=rear){
	printf("value of queue  is %d\n",queue[i]);
	i=(i+1)%n;
 }
 printf("value of queue  is %d\n",queue[i]);
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
