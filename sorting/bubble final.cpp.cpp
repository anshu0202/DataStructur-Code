#include<iostream>
#include<ctime>
#include<stdlib>
using namespace std;
int main(){
	int x,max;
	cout<<"Enter size of array\n";
	cin>>x;
	cout<<"Enter maximum number to generate\n";
	cin>>max;
	for(i=0;i<x;i++){
		a[i]=rand(0)%max+1;
	}
	print(a,x);
	sort(a,x);
	print(a,x);
}
void print(int a[],int x){
	int i;
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
}
void sort(int a[],int x){
	int i,round,min,loc,temp,k;
	min=a[0];
	loc=k;
	for(round=1;round<=x;round++){
		for(i=round;i<=x-round;i++){
			if(min>a[i]){
				min=a[i];
				loc=i;
			}
		}
	}
}
