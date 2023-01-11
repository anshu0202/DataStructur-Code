#include<iostream>
using namespace std;
int main(){
	int m,n,i,j,k,temp;
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
			for(k=0;k<n-1;k++){
				if(a[j][k]>a[j][k+1]){
					temp=a[j][k];
					a[j][k]=a[j][k+1];
					a[j][k+1]=temp;
				}
			}
		}
	}
		cout<<"\nAfter rows wise sorting\n";
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<m;i++){
		for(j=0;j<m-1;j++){
			for(k=0;k<n;k++){
				if(a[j][k]>a[j+1][k]){
					temp=a[j][k];
					a[j][k]=a[j+1][k];
					a[j+1][k]=temp;
				}
			}
			
		}
	}
		cout<<"\nAfter rows and column wise sorting\n";
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
