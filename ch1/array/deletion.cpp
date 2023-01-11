#include<iostream>
using namespace std;
int main(){
	int x,i,loc=-1,val;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];	
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Enter the element you want to delete\n";
	cin>>val;
	for(i=0;i<x;i++){
		if(a[i]==val){
			loc=i;
			break;
		}
	}
	if(i==x ||loc==-1){
		cout<<val<<" is not present in the array\n";
	}
	else{	
	for(i=loc;i<=x;i++){
		a[i]=a[i+1];
	}
	a[i]=NULL;
		cout<<"Elements of array after deletion\n";
	for(i=0;i<x-1;i++){
		cout<<a[i]<<" ";
	}
}	
}
