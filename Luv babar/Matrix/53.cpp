#include<iostream>
using namespace std;
int main(){
	int m,n,i,j,c1,max,k;
	cout<<"Enter number of rows\n";
	cin>>m;
	cout<<"Enter number of columns\n";
	cin>>n;
	int a[m][n],b[m];
	cout<<"Enter elements of Matrix\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<"Enter element["<<i<<j<<"] \n";
			cin>>a[i][j];
		}
	}
	cout<<"Elements of Matrix are:\n";
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){			
			for(k=0;k<n;k++){
				if(a[i][j]==a[i][k] && k!=j){
				cout<<a[i][j]<<" is common element in row "<<i+1<<endl;	
				a[i][j]=-1;
				break;
				}
			}
		}
	}
	
}
