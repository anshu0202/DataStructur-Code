#include<iostream>
using namespace std;
int b[100];
void sort(int a[],int l,int u);
void merge(int a[],int l,int u,int mid);
int main(){
	int x,i;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Elements of array are:\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
	sort(a,0,x-1);
	cout<<"\nElements of array after sorting are:\n";
	for(i=0;i<x;i++){
		cout<<b[i]<<" ";
	}
}
void sort(int a[],int l,int u){
	int mid;
	mid=(l+u)/2;
	if(l<u){
		sort(a,l,mid);
		sort(a,mid+1,u);
	     merge(a,l,u,mid);
	}
}
void merge(int a[],int l,int u,int mid){
		int i,j,k;
		i=l,j=mid+1,k=l;
		while(i<=mid && j<=u){
			if(a[i]<=a[j]){
				b[k]=a[i];
				i++;
				k++;
			}
			else{
				b[k]=a[j];
				j++;
				k++;
			}
		}
		if(i>mid){
			while(j<=u){
				b[k]=a[j];
				j++;
				k++;
			}
		}
		else{
			while(i<=mid){
				b[k]=a[i];
				i++;
				k++;
			}
		}
}
