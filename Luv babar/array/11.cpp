#include<iostream>
using namespace std;
int main(){
	int x,y,i,j,count=0;
	cout<<"Enter size of array A:\n";
	cin>>x;
	int a[x];
	cout<<"Enter size of array B:\n";
	cin>>y;
	int b[y];
	cout<<"Enter elements of array A\n";
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	cout<<"Enter elements of array B\n";
	for(i=0;i<x;i++){
		cin>>b[i];
	}
      cout<<"Union of array A and B\n";
      for(i=0;i<x;i++){
      	for(j=0;j<x;j++){
      	if(a[i]==b[j]){
      		cout<<a[i]<<" ";
      		break;
		  }
      }
	  }
	  cout<<"\nIntersection of array A and B\n";
      for(i=0;i<x;i++){
      	count=0;
      	for(j=0;j<x;j++){
      	if(a[i]!=b[j]){
      		count++;
		  }
      }
      if(count==x){
      	cout<<a[i]<<" ";
	  }
	  }
	  for(i=0;i<x;i++){
      	count=0;
      	for(j=0;j<x;j++){
      	if(b[i]!=a[j]){
      		count++;
		  }
      }
      if(count==x){
      	cout<<b[i]<<" ";
	  }
	  }
}
