#include<iostream>
using namespace std;
int main(){
	int size,i,j,temp,temp2;
	cout<<"Enter size of array\n";
	cin>>size;
	int a[size];
	cout<<"Enter elements of array\n";
	for(i=0;i<size;i++){
		cout<<"Enter element ["<<i<<"] \n";
		cin>>a[i];
	}
	cout<<"Elements of array\n";
	for(i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	for(i=1;i<size;i++){
		temp=a[i];
		for(j=i-1;j>=0 && a[j]>temp;j--){
				a[j+1]=a[j];
		}
		a[j+1]=temp;
	}
	cout<<"\nElements of array after insertion sort\n";
	for(i=0;i<size;i++){
		cout<<a[i]<<" ";
	}	
}
