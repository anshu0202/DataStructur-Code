#include<stdio.h>
 #define n 5
int dequeue[n]; 
int f=-1,r=-1;
int enqueuefront(int);
int display();
int getrear();
int getfront();
int enqueuerear(int);
int main(){
	enqueuefront(5);
	enqueuefront(59);
	enqueuerear(499);
	enqueuerear(596);
	enqueuefront(45);
	display();
	getrear();
    getfront();
}  
int enqueuefront(int x){
	if((f==0 && r==n-1)||(f==r+1)){
		printf("queue is full");
	}
	else if(f==-1 && r==-1){
		f=r=0;
		dequeue[f]=x;
	}
	else if(f==0){
		f=n-1;
		dequeue[f]=x;		
	}
	else{
		f--;
		dequeue[f]=x;
	}
}
int enqueuerear(int x){
	if((f==0 && r==n-1)||(f==r+1)){
		printf("queue is full");
	}
	else if(f==-1 && r==-1){
		f=r=0;
		dequeue[r]=x;
	}
	else if(r==n-1){
		r=0;
		dequeue[r]=x;
	}
	else{
		r++;
		dequeue[r]=x;
	}
}
int display(){
	int i=f;
	while(i!=r){
		printf("%d \n",dequeue[i]);
		i=(i+1)%n;
	}
	printf("%d ",dequeue[r]);
}
int getfront(){
	if(f==-1 && r==-1){
		printf("queue is empty\n");
	}
	else{
		printf("%d is front element\n",dequeue[f]);
	}
}
int getrear(){
	if(f==-1 && r==-1){
		printf("queue is empty\n");
	}
	else{
		printf("\n%d is rear element\n",dequeue[r]);
	}
}
