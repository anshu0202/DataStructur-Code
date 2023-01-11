#include<iostream>
using namespace std;
int main(){
	int x,i,j,temp,min;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cout<<"Enter element ["<<i<<"] \n";
		cin>>a[i];
	}
	cout<<"Elements of array are:\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
	for(i=0;i<x;i++){
		min=a[i];
		for(j=0;j<x && min>a[j];j++){
				min=a[j];
			}
		a[j+1]=a[i];
			a[i]=min;	
	}
	cout<<"\nElements of array after selection sort are:\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
}
