#include<iostream>
using namespace std;
int main(){
	int x,i,j,k,min,flag;
	cout<<"Enter size of array\n";
	cin>>x;
	cout<<"Enter elements of array\n";
	int a[x];
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	for(i=0;i<x-1;i++){
		min=a[i];
		flag=0;
		for(j=i+1;j<x ;j++){
			if(min>a[j]){
				min=a[j];
				k=j;
				flag=1;
			}
		}
		if(flag==1){
		a[k]=a[i];
		a[i]=min;
	}
	}
	cout<<"\nElements of array after selection sort are:\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}	
}
