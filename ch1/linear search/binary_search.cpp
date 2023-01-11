#include<iostream>// by using recurssive approach  
using namespace std;
int binary_search(int a[],int x,int y, int z);
int main(){
	int x,i,y,temp,l,r,mid;
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
	 for(i=0;i<x;i++){
	 	for(int j=i;j<x;j++){
	 		if(a[i]>a[j]){
	 			temp=a[i];
	 			a[i]=a[j];
	 			a[j]=temp;
			 }
		 }
	 }
	  cout<<"\nElements of array after sorting are:\n";
	 for(i=0;i<x;i++){
	 	cout<<a[i]<<" ";
	 }
	 cout<<"\nEnter the  element you want to seacrh\n";
	 cin>>y;
	int k= binary_search(a,0,x-1,y);
	  
if(k==-1){
	cout<<y<<" is not present in the array\n";
}
else{
	cout<<y<<" is present in the array ";
}
}
int binary_search(int a[],int l,int r,int data){
	if(r>=l){	
	int	mid=(l+r)/2;
	if(data==a[mid]){
		return mid;
	}
	else if(data<a[mid]){
	return  binary_search( a,l,mid-1, data);	
}
	else{	
	 return binary_search( a, mid+1,r, data);		
}
}
return -1;
}
