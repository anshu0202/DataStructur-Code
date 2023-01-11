#include<iostream>
using namespace std;
int main(){
	int x,i;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	a[x]=20;
		for(i=0;i<=x;i++){
		cout<<a[i]<<"  ";
	}
	cout<<endl;
	a[x+1]=100;
		for(i=0;i<=x+1;i++){
		cout<<a[i]<<"  ";
	}
}
