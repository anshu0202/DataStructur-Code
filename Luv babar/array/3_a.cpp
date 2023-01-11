#include<iostream>
using namespace std;
int min(int a[],int x);
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
	cout<<"Enter K to find Kth smallest value\n";
	cin>>k;
	for(i=1;i<=k;i++)
	l= min(a,x);
	cout<<" Smallest element is "<<l;
}
int min(int a[],int x){
	int temp,m,i,k;
	m=a[0];
	for(i=1;i<x;i++){
		if(a[i]<m){
			k=i;
			temp=a[i];
			a[i]=m;
			m=temp;
		}
	}
	for(i=0;i<x;i++){
		if(a[i]==m){	
			a[i]=10000*m;
		}
	}
		return m;
}
