#include<iostream>// wrong done by mam
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int x,max,i,j,temp,k;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	srand(time(0));
	cout<<"Enter maximum number to generate\n";
	cin>>max;
	for(i=0;i<x;i++){
		a[i]=(rand()%max+1);
	}
	cout<<"\nElements of array before sorting\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
	for(i=0;i<x;i++){
		k=i+1;
		for(j=0;j<=x-k;j++){
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
