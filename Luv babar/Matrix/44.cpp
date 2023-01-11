#include<iostream>
using namespace std;
void spiral(int [][10],int,int);
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
	//spiral(a,m,n);	
	while(i<m && j<n){
		
	}
}
//void spiral(a[][],int m,int n){
//	
//}
