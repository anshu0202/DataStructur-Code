#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int x,i,*q;
	 cout<<"Enter size of array\n";
	 cin>>x;
	 int a[x];
	 q=a;
	 cout<<"Enter elements of array\n";
	 for(i=0;i<x;i++){
	 	cin>>a[i];
	 	printf("%d is address of %d\n",&a[i],i);
	 }
	 printf("*************\n");
	 printf("%d\n",2[a]);
	 printf("%d\n",*(a+1));
	 printf("%d\n",*(q+1));
	 printf("Address 1 %d\n",a);
	 printf("Address 1 %d\n",&a);
	 printf("Address 1 %d\n",a+1);
	 printf("Address 1 %d\n",&a+1);// array k last index k baad ka address printf krega
	printf("Address 1 %d\n",(&a)-1);
	//	printf("Address 1 %d\n",(&a)*21);   // both will  show error
			//printf("Address 1 %d\n",(&a)/20);
	printf("Address 1 %d\n",&a+2);
} 

