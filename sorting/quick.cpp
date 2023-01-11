#include<iostream>
using namespace std;
int a[100];
int sort(int [],int,int);
void part(int [],int, int);
int main(){
	int x,i,pivot;
	cout<<"Enter size of array\n";
	cin>>x;
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Elements of array are:\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
	i=0;
	part(a,i,x-1);
	cout<<"\nElements of array after sorting are:\n";
}
int  sort(int a[],int lb, int ub){
	int pivot,start,end,temp;
	pivot=a[lb];
	start=lb;
	end=ub;
	while(start<end){
	while(a[start]<=pivot){
		start++;
	}
	while(a[end]>pivot){
		end--;
	}
	if(start<end){
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
	}
	return end;
}
temp=a[lb];
a[lb]=a[end];
a[end]=a[lb];
}
void part(int a[],int lb,int ub,int size){
	if(lb<ub){
		int loc=sort(a,lb,ub);
		part(a,lb,loc-1);
		part(a,loc+1,ub);
	}
	int i;
	for(i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	
}
