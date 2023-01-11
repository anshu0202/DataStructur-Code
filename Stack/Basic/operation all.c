#include<stdio.h>
#define size 5
int top=-1;
int stack[size];
void push(int);
int pop();
void peek();
void traverse();
void exit();
int main(){
	int ch,val,item;
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
		case 2:item=pop();
		if(item==0){
			printf("Stack is underflow\n");
		}
		else{
			printf("popped value is %d\n",item);
		}
			break;
		case 3:peek();
			break;
		case 4:traverse();
		break;
	case 5:printf("Program ends now\n");
			exit(0);
		break;
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
 int pop(int val){
 	if(isEmpty()){
 		return 0;
	 }
	 else{
	 	return stack[top--];	
	 }
 }
 int isEmpty(){
 	if(top==-1){
 		return 1;
	 }
	 else{
	 	return 0;
	 }
 }
 void peek(){
 	if(isEmpty()){
 		printf("Stack is empty\n");
	 }
	 else{
	 	printf("Peek element is %d\n",stack[top]);
	 }
 }
 void traverse(){
 	int i;
 	if(isEmpty()){
 		printf("Stack is empty\n");
	 }
	 else{ 
 	printf("The elements of stack are:\n");
 	for( i=0;i<=top;i++){
 		printf("%d\n",stack[i]);
	 }
    }
 }

