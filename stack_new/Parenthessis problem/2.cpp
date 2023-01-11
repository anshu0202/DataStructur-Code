#include<iostream>//incomplete
using namespace std;
char stack[30],exp[30];
int size,k=-1;
char p[30];
void push(char);
void pop(char);
void put(char);
int main(){
	int i;
	cout<<"Enter the size of expression\n";
	cin>>size;
	cout<<"Enter expression\n";
	for(i=0;i<size;i++){
		cin>>exp[i];
	}
	cout<<"Expression enter is\n";
	for(i=0;i<size;i++){
		cout<<exp[i];
	}
	stack[0]='(';
	stack[size]=')';
	for(i=0;i<size;i++){
		if(exp[i]=='('||exp[i]=='{'||exp[i]=='[' ||exp[i]=='+'||exp[i]=='-'||exp[i]=='*'||exp[i]=='/'){
			push(exp[i]);
		}
		else if(exp[i]==')'||exp[i]=='}'||exp[i]==']'){
			pop(exp[i]);
		}
		else {
			put(exp[i]);
		}
	}
}
void push(char c){
	k++;
	stack[k]=c;
}
void pop(char c){
	
}
