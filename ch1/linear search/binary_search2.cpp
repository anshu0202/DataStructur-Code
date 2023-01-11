#include<iostream>
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
	 for(i=0;i<x;i++){
	 	for(int j=i;j<x;j++){
	 		if(a[i]>a[j]){
	 			temp=a[i];
	 			a[i]=a[j];
	 			a[j]=temp;
			 }
		 }
	 }
	 cout<<"\nEnter the  element you want to search\n";
	 cin>>y;
	int k= binary_search(a,0,x-1,y);	  
if(k==-1){
	cout<<y<<" is not present in the array\n";
}
else{
	cout<<y<<" is present in the array  ";
}
}
int binary_search(int a[],int l,int r,int data){
	while(l<=r){		
	int	mid=(l+r)/2;
	if(data==a[mid]){
		return mid;
	}
	else if(data<a[mid]){
		r=mid-1;
	}
	else{
		l=mid+1;
	}
}
return -1;
}
