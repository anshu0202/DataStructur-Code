#include<iostream>
using namespace std;
int main(){
	int m,n,i,j,find,flag=0;
	cout<<"Enter number of rows\n";
	cin>>m;
	cout<<"Enter number of columns\n";
	cin>>n;
	int a[m][n];
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
	cout<<"Enter elements to search\n";
	cin>>find;
		for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==find){
			cout<<a[i][j]<<" is present in the marix\n";
			flag=1;
			break;
		}
		}
			}
			if(flag==0){
				cout<<find<<" is not present in the Matrix\n";
			}
}
