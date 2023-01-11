#include<iostream>
using namespace std;
int main(){
	int i,j,n,k;
	cout<<"Enter n\n";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){	
			if(i==j && i!=1){
				cout<<j-2<<"  ";
			}	
//			else if(i==j){
//				cout<<j-1<<"  ";
//			}
			else
			cout<<j<<"  ";
		}
		cout<<endl;
	}
}
