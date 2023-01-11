#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter size\n";
	cin>>x;
	int i,a[x];
	for(i=0;i<x;i++){
		cin>>a[i];
	}
	for(i=0;i<x;i++){
		cout<<a[i]<<" ";
	}
	int j,k,m;
           int b[x/2];
                for(i=0 && j=x-1;i<a_count && j>=0;i++ && j--){
                    if(i<(x/2)){
                        b[i]=a[i];
                        m=i;
                    }
                   if(i<=j){
                       a[i]=a[j];
                       k=i;
                   } 
                   
                }
                for(i=k && j=m;i<x j>=0;i++ && j--){
                    a[i]=b[j];
                }
           
}
