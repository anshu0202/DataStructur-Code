#include<iostream>
using namespace std;
int max(int a[],int x);
int main(){
	int x,i,l,k;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cout<<"\nElement ["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"Enter K to find Kth largest value\n";
	cin>>k;
	for(i=1;i<=k;i++)
	l= max(a,x);
	cout<<k<<" Largest element is "<<l;
}
int max(int a[],int x){
	int temp,m,i,k;
	m=a[0];
	for(i=1;i<x;i++){
		if(a[i]>m){
			temp=a[i];
			a[i]=m;
			m=temp;
		}
	}
	for(i=1;i<x;i++){
		if(a[i]==m){	
			a[i]=-m;
		}
	}
		return m;
}
