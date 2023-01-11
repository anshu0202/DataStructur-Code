#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
int a[3][3],i,j; // a[][3] is correct but a[3][] is not correct
cout<<"Enter elements of array\n";// for row major 
		cout<<sizeof(a);// B+((i*n)+j)*size -> gives address of a[i][j]. n is number of column index starts from 0.
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){  //For row major B+[((i-1)*n)+(j-1)]*size  ->index starts from 1
			cin>>a[i][j];// B+((j*m)+i)*size -> gives address of a[i][j]. n is number of column index starts from 0.
		}//For column major B+[((j-1)*m)+(i-1)]*size  ->index starts from 1
	}
}
