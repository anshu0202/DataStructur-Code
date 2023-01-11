#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int i,max,a[50];
	cout<<"Enter maximum number to generate\n";
	cin>>max;
	srand(time(0));
	for(i=0;i<50;i++){
	 a[i]=((rand()%max)+1);
}
	for(i=0;i<50;i++){
		cout<<a[i]<<endl;
	}
	
}
