#include<iostream>
using namespace std;
void quick(int a[], int l,int u);
int partition(int a[],int l,int u);
int main(){
	int x,i;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Elements of array are:\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
	quick(a,0,x-1);	
	cout<<"\nElements of array after sorting are:\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
}
void quick(int a[],int l,int u){
	int partindex;
	if(l<u){
	partindex=partition(a,l,u);
	quick(a,l,partindex-1);
	quick(a,partindex+1,u);
}
}
int partition(int a[],int l,int u){
	int pivot;
	pivot=a[l];
	int i=l+1;
	int temp,j=u;
	do{
	while(a[i]<=pivot){
		i++;
	}
	while(a[j]>pivot){
		j--;
	}
	if(i<j){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
	while(i<j);
	temp=a[l];
	a[l]=a[j];
	a[j]=temp;
	return j;
} 
