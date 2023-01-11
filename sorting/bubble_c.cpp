#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int x,max,i,j,temp;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	srand(time(0));
	cout<<"Enter elements\n";
	for(i=0;i<x;i++){
	cin>>a[i];	
	}
	cout<<"\nElements of array before sorting\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
	for(i=0;i<x;i++){
		for(j=i;j<x;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\nElements of array after sorting\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}	
}
