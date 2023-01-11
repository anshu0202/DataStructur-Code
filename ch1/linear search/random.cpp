#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int i,max;
	cout<<"Enter maximum number to generate\n";
	cin>>max;
	srand(time(0));
	for(i=0;i<5;i++)
	cout<<((rand()%max)+1)<<endl;
}
