#include<iostream>
using namespace std;
int main(){
	int x,i;
	cout<<"Enter the size of array\n";
	cin>>x;
	int a[x],c0=0,c1=0,c2=0;
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cin>>a[i];
		if(a[i]>=3){
			cout<<"Error enter element less than 3"<<endl;
			cin>>a[i];
		}
		if(a[i]==0){
			c0++;
		}
		else if(a[i]==1){
			c1++;
		}
		else if(a[i]==2){
			c2++;
		}
	}
	cout<<c0<<c1<<c2<<endl;
	cout<<"Elements of array in ascending order are\n";
	for(i=0;i<c0;i++){
		cout<<"0 ";
	}
	for(i=0;i<c1;i++){
		cout<<"1 ";
	}
	for(i=0;i<c2;i++){
		cout<<"2 ";
	}
}
