#include<iostream>
using namespace std;
char exp[100],operator1[20],operand[20],x,postfix[30];
int size,top1=-1,top2=-1,top3=-1;
int push1(char);
int push2(char);
int pop();
int main(){
	int i=0;
	cout<<"Enter the size of expression\n";
	cin>>size;
	cout<<"Enter expression\n";
		cin>>exp;
	for(i=0;i<size;i++){
		if(exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'){
			x=exp[i];
			push1(x);
		}
		else{
			x=exp[i];
			push2(x);
		}
	}
	if(top2!=-1){
		for(i=0;i<=top2;i++){
			top3++;
		postfix[top3]=operand[i];
	//	cout<<top3<<endl;
	}
	for(i=top1;i>=0;i--){
		top3++;
		postfix[top3]=operator1[i];
	}
}
		cout<<"Postfix expression is :\n";
	for(i=0;i<size;i++){
		cout<<postfix[i];
	}
	return 0;
}
int push1(char x){
		 if((top1!=-1) && (x=='*'|| x=='/')  && (operator1[top1]=='*'|| operator1[top1]=='/') ){
			pop();		
			operator1[top1]=x;
		}
		else if((top1!=-1) && (operator1[top1]=='*'||operator1[top1]=='/')){	
			pop();		
			operator1[top1]=x;
		}
		else if((top1!=-1) && (x=='+'|| x=='-')  && (operator1[top1]=='+'|| operator1[top1]=='-') ){
			pop();		
			operator1[top1]=x;
		}
	else{
		top1++;
		operator1[top1]=x;
	}
	return 0;	
}
int push2(char x){
	top2++;
	operand[top2]=x;
	return 0;
}
int pop(){
	int i;
	for(i=0;i<=top2;i++){
		postfix[i]=operand[i];
		top3++;
	}
	top2=-1;
	postfix[i]=operator1[top1];
	top3++;
	return 0;
}
