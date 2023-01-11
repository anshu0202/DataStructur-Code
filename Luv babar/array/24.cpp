#include<iostream>
using namespace std;
int main(){
	int x,y,z,i,j,temp;
	cout<<"Enter size of array A\n";
	cin>>x;
	int a[x];
	cout<<"Enter elements of array A\n";
	for(i=0;i<x;i++){
		cout<<"\nElement ["<<i+1<<"] ";
		cin>>a[i];
	}
	for(i=0;i<x;i++){
		for(j=i;j<x;j++){
		if(a[i]>a[j]){
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}	
		}
	}
			cout<<"Enter size of array B\n";
	cin>>y;
	int b[y];
	cout<<"Enter elements of array B\n";
	for(i=0;i<y;i++){
		cout<<"\nElement ["<<i+1<<"] ";
		cin>>b[i];
	}
	for(i=0;i<y;i++){
		for(j=i;j<y;j++){
		if(b[i]>b[j]){
			temp=b[j];
			b[j]=b[i];
			b[i]=temp;
		}	
		}
	}
		cout<<"Enter size of array C\n";
	cin>>z;
	int c[z];
	cout<<"Enter elements of array C\n";
	for(i=0;i<y;i++){
		cout<<"\nElement ["<<i+1<<"] ";
		cin>>c[i];
	}
	for(i=0;i<z;i++){
		for(j=i;j<z;j++){
		if(c[i]>c[j]){
			temp=c[j];
			c[j]=c[i];
			c[i]=temp;
		}	
		}
	}
	cout<<"Common element in all the three arrays\n";
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
		if(a[i]==b[j] && b[j]==c[j]){
			cout<<a[i]<<" ";
		}
	}
	}
}

