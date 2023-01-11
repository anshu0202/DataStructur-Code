#include<iostream>
using namespace std;
struct node{
	int data;
	 int count=1;
	struct node *arr[];
};
struct node *head=NULL;
struct node *arr2[10];
static int numnode;
void create();
void print();
int main(){
	int choice=1;
	while(choice==1){
     	create();
     	cout<<"Do you want to continue(0,1)?\n";
     	cin>>choice;
	}
	cout<<"values of graph are\n";
		print();
	return 0;
}
void print(){
		struct node *temp;
		temp=head;
		int x=0;
		while(x<head->count){
		cout<<temp->arr[x]->data<<"  ";
		x++;
	}	
}
void create(){
	struct node *newnode;
	newnode= new node;
	if(head==NULL){
		head=newnode;
		cout<<"Enter value to store\n";
		cin>>newnode->data;
		newnode->arr[0]=newnode;
		numnode=1;
	}
	else{
		int select;
		struct node *temp;
		cout<<"Enter value to store\n";
		cin>>newnode->data;
		cout<<"Do you want to link it (0,1)?\n";
		cin>>select;
		int choice=1;
		while(choice==1){
		if(select==1){
			cout<<"Enter value of vertices to which it has to link\n";
			cin>>select;
			temp=head;
			int x=0; 
			   	while(x<=temp->count){	   		
				if(temp->data==select)
				    {
				    	cout<<"Temp data = "<<temp->data<<endl;
					temp->arr[temp->count]=newnode;
					temp->count=temp->count+1;
					flag=1;
					break;
				    }
				else{
					temp=temp->arr[x++];
				    }
				    temp=temp->arr[x];
				    x++;
			}
		}
		cout<<"Do you want to link with other vertex also(0,1)?\n";
		cin>>choice;
		}
		}
	}
