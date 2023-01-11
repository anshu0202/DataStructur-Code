#include<stdio.h>
#define size 5
int top=-1;
int stack[size];
void push(int);
int main(){
	int ch,val;
	while(1){
	printf("Select operation you want to perform\n");
	printf("1 for push\n");
	printf("2 for pop\n");
	printf("3 for peek\n");
	printf("4 for traverse\n");
	printf("5 for Quit\n");
	scanf("%d",&ch);
	switch(ch){
		case 1:printf("Enter  element to push\n");
		scanf("%d",&val);
			push(val);
			break;
		case 2:pop();
			break;
		case 3:peek();
			break;
		case 4:poll();
			break;
//		case 5:exit(0);
//			break;
		default: printf("Invalid input\n");
		
	}	
}	
}
 void push(int val){
 	if(isFull()){
 		printf("Over flow condition\n");
	 }
	 else{
	 	top++;
	 	stack[top]=val;
	 	printf("%d is pushed\n",val);
	 }
 }
 int isFull(){
 	if(top==size-1){
 		printf("Stack is full\n");
 		return 1;
	 }
	 else{
	 	return 0;
	 }
 }
