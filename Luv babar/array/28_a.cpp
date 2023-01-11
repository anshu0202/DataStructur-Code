#include<iostream> // Minimum product subarray 
using namespace std;
int main(){
	int x,i,j,pro,k,q;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	pro=a[0]*a[0];
	for(i=0;i<x;i++){
		for(j=i+1;j<x;j++){
			if((a[i]*a[j])<pro){
				pro=(a[i]*a[j]);
				k=a[i];
				q=a[j];
			}
		}
	}
	cout<<"Minimum product subarray is "<<pro;
	cout<<"\nIt is product of "<<k<<" and "<<q;
}
