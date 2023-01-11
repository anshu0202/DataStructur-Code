#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int x,i,*q;
	 cout<<"Enter size of array\n";
	 cin>>x;
	 int a[x];
	 q=&a[1];
	 cout<<"Enter elements of array\n";
	 for(i=0;i<x;i++){
	 	cin>>a[i];
	 }
	 printf("%p\n",&a);
	 printf("%d\n",*a);
	 printf("%p\n",q);
	 printf("%p\n",&a[1]);
	// printf("%p\n",a++)
	 printf("%p\n",q++);
} 

