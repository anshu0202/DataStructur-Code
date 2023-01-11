#include<iostream>
using namespace std;
char stack[20],exp[20];
int size,top=-1;
void push();
void pop();
int main(){
	cout<<"Enter size of expression\n";
	cin>>size;
	cout<<"Enter a expression \n";
	cin>>exp;
	int i;
	for(i=0;exp[i]!='\0';i++){
		if(exp[i]=='('){
			push();
		}
		else if(exp[i]==')'){
			pop();
		}
	}
	if(top==-1){
		cout<<"Parenthesis is balanced\n";
		cout<<"Expression is correct\n";
	}
	else{
		cout<<"Parenthesis is not balanced\n";
		cout<<"Expression is wrong\n";
	}
}
void push(){ 
	++top;
	stack[top]=')';
}
void pop(){
	if(top!=-1){
	top--;
}
}
