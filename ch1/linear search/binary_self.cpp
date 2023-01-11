#include<iostream>// recursive approach
using namespace std;
int search(int a[],int x,int y, int z);
int main(){
	int x,i,j,key,temp;
	cout<<"Enter size of array\n";
	cin>>x;
	int a[x];
	cout<<"Enter elements of array\n";
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	for(i=0;i<x;i++){
		for(j=i+1;j<x;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Enter element to search\n";
	cin>>key;
	int z=search(a,0,x-1,key);
	if(z==-1){
		cout<<key<<" is not present in the array\n";
	}
	else{
		cout<<key<<" is present  in the array";
	}
}
int search(int a[],int lb,int ub,int key){
	int mid;
	if(lb<=ub){
	mid=(lb+ub)/2;
	if(a[mid]==key){
		return mid;
	}
	else if(a[mid]>key){
		ub=mid-1;
		return search( a,lb,ub,key);
	}
	else{
		lb=mid+1;
	return search(a,lb,ub,key);
	}
}
	return -1;
}
