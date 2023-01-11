#include<stdio.h>
#define n 5
int stack[n];
int top=-1;
int  push(int);
int main(){
	int val;
	printf("Enter the value you want to place in the stack\n");
	scanf("%d",&val);
	int push( val);
}
int push(int val){
	top=-1;
	if(top==n-1){
		printf("over flow condition\n");
	}
	else{
		top++;
		stack[top]=val;
		printf("%d",stack[0]);
	}	
}

