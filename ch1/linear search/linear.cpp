#include<iostream>
using namespace std;
int main(){
	int x,i,y;
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
	 cout<<"\nEnter the  element you want to search\n";
	 cin>>y;
	 for(i=0;i<x;i++){
	 	if(a[i]==y){
	 		cout<<y<<" is present in the array at index "<<i;
	 		break;
		 }
	 }
 if(i==x){
	 	cout<<y<<" is not present in the array\n";
	 }	
}
