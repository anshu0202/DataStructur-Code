#include<iostream>
using namespace std;
int main(){
	int x,i,loc,val;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x+1];	
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Enter the location where you want to insert\n";
	cin>>loc;
	if(loc<1||loc>x+1){
		cout<<"Invalid location!\n";
	}
	else{	
	cout<<"Enter the element you want to insert\n";
	cin>>val;
	for(i=x-1;i>=loc-1;i--){
		a[i+1]=a[i];
	}
	a[loc-1]=val;
		cout<<"Elements of array after insertion\n";
	for(i=0;i<=x;i++){
		cout<<a[i]<<" ";
	}
}
}
