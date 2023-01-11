#include<iostream>
using namespace std;
int main(){
	int x,i,j,temp;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"\nElements of array before sorting\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
	for(i=1;i<=x-1;i++){
		for(j=0;j<=x-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"\nElements of array after sorting\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}	
}
