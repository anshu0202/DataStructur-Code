#include<iostream>
usinh namespace std;
struct node{
	int data;
	struct node *right,*left;
};
struct *root=NULL;
int main(){
	int key=1;
	while(key!=-1){
		cout<<"Enter value to insert\n";
		cin>>key;
		if(key==-1){
			break;
		}
		insert(key);
	}
}
void insert(int value){
	
}
