#include<iostream>
using namespace std;
int main(){
	int x,i,j,temp;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cout<<"\nElement ["<<i+1<<"] ";
		cin>>a[i];
	}
	for(i=0;i<x;i++){
		for(j=i;j<x;j++){
		if(a[i]>a[j]){
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}	
		}
	}
	cout<<"After arranging -ve values together\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}	
}

