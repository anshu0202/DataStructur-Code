#include<iostream>
using namespace std;
void TOH(int ,int, int,int );
int main(){
	int n;
	int x=1,y=2,z=3;
	cout<<"Enter number of plates\n";
	cin>>n;
	cout<<"The movements of plates to reach the final tower are:\n";
	TOH(n,1,2,3);
	return 0;
}
void TOH(int n,int x, int y, int z){
	if(n>0){
		TOH(n-1,x,z,y);
		cout<<x<<z<<endl;
		TOH(n-1,y,x,z);
	}
}
