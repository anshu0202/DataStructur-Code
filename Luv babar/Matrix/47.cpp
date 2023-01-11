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
		c1=0;
		for(j=0;j<n;j++){
			if(a[i][j]==1){
				++c1;
			}
		}
		b[i]=c1;
	}
	max=b[0];
	for(i=1;i<m;i++){
		if(max<b[i]){
			max=b[i];
			k=i;
		}
	}
	cout<<"Maximum number of 1 is "<<max<<" present in row "<<k+1<<endl;
	
}
