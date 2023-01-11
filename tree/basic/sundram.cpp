#include<iostream>
using namespace std;
int main(){
	float a=3,b=0,c;
	c=a/b;
	try{
		if(b==0){
			throw c;
		}
		else{
			cout<<"Value of c is "<<c<<endl;
		}
	}
	catch(float x){
		cout<<x<<" is caught\n";
		cout<<"Exception caught\n";
	}
	cout<<"Program ends\n";
}
