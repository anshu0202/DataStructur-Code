#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int x,max,i,j,temp,round,flag=0;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	srand(time(0));
	cout<<"Enter maximum number to generate\n";
	cin>>max;
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		//cin>>a[i];
		a[i]=(rand()%max+1);
	}
	cout<<"\nElements of array before sorting\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
	for(round=1;round<=x-1;round++){
		flag=0;
		for(j=0;j<=x-1-round;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0){
				break;
			}
	}
	cout<<"\nNumber of rounds "<<round<<endl;
	cout<<"\nElements of array after sorting\n";
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}	
}
