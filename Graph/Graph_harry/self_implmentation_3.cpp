#include<iostream>
using namespace std;
struct node{
	int data,count=0;
	struct node *arr[5];
};
struct node *head=NULL;
struct node  *arr2[10];
int wncount=-1;
void create();
void print();
void create(){
	struct node *newnode,*temp;
	newnode = new node;
	if(head==NULL){
		cout<<"Enter value to store\n";
		cin>>newnode->data;
		head=newnode;
		newnode->arr[0]=newnode;
		newnode->count++;
		wncount++;
		arr2[wncount]=newnode;
	}
	else{
		int value;
		cout<<"Enter the value to store\n";
		cin>>newnode->data;
		newnode->arr[0]=newnode;
		newnode->count++;
		wncount++;
		arr2[wncount]=newnode;
		int choice=1;
		while(choice==1){
			cout<<"Enter the value of node to which it has to link\n";
		cin>>value;
		int x=0; 
		temp=head;
		while(x<=wncount){
			int y=0;
			while(y<arr2[x]->count){			
			if(arr2[x]->data==value){
				newnode->arr[newnode->count]=arr2[x];
				newnode->count++;
				arr2[x]->arr[arr2[x]->count]=newnode;
				arr2[x]->count++;
				break;
			}
			y++;
		}
			x++;
		}
		cout<<"Do you want to link with other nodes also(0,1)?\n";
		cin>>choice;
	}
	}
}
void print(){
	int x=0;
	struct node *temp;
	temp=head;
	while(x<=wncount+2){
		int y=0;
		cout<<"Element linked with "<<arr2[x]->data<<endl;
		while(y<temp->count-1){
			cout<<temp->arr[y+1]->data<<" ";
			y++;
		}
		x++;
		cout<<endl;
		temp=arr2[x];
	}
}
int main(){
	int choice=1;
	while(choice==1){
		create();
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Elements of graph are:\n";
	print();
	return 0;
}
