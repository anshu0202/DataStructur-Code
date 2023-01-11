#include<iostream>
using namespace std;
int search(int [],int, int, int); 
int main(){
	int x,i,temp,j,y;
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
		 cout<<"Elements of array after sorting\n";
		  for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nEnter element to search\n";
	cin>>y;
	int found=search(a,0,x-1,y); 
	if(found==-1){
		cout<<y<<" is not present in the array\n";
	}
	else{
		cout<<y<<" is present  at index "<<found<<" in the  sorted array";
	}
}
int search(int a[],int l,int r,int data){
	while(r>=l){
		int mid=(l+r)/2;
		if(a[mid]==data){
			return mid;
		}
		else if(a[mid]>data){
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
} 
