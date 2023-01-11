#include<stdio.h> 
#define n 5
int s1[n],s2[n];
int top1=-1,top2=-1;
int enqueue(int );
int push1(int);
int push2(int);
int display();
int count =0;
int pop1();
int pop2();
int main(){
	enqueue(2);
	enqueue(22);
	enqueue(29);
	display();
	dequeue();
	display();
}
int enqueue(int x){
	push1(x);
	count++;
}
int push1(int y){
	if(top1==n-1){
		printf("overflow condition\n");
	}
	else{
		top1++;
		s1[top1]=y;
	}
}
int dequeue(){
	int i,a,b;
	if(top1==-1 && top2==-1){
		printf("stack is empty\n");
	}
	else{
		for(i=0;i<count;i++){
			a=pop1();
			push2(a);
		}
		b=pop2();
		printf("%d is dequeued\n",b);
		count--; 
		for(i=0;i<count;i++){
			a=pop2();
			push1(a);
		}
	}
}
int pop1(){
	return s1[top1--];
}
int pop2(){
	return s2[top2--];
}
int push2(int y){
	if(top2==n-1){
		printf("overflow condition\n");
	}
	else{
		top2++;
		s2[top2]=y;
	}
}
int display(){
	int i;
	for(i=0;i<=top1;i++){
		printf("%d \n",s1[i]);
	}
}
