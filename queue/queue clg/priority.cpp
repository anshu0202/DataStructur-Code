#include<iostream>//incomplete
using namespace std;
struct node{
	int info;
	int priority;
	node *link;
};
node *start=NULL,*newnode,*temp,*tail;
int main(){
	int choice=1;
	while(choice){
		cout<<"Enter 1 for enqueue\n";
		cout<<"Enter 2 for dequeue\n";
		cout<<"Enter 3 to display\n";
		cin>>sel;
		switch(sel){
			case 1:enqueue(); break;
			case 2:dequeue(); break;
			case 3:display(); break;
			default: cout<<"Select valid option\n";
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
}
void enqueue(){
	newnode = new node;
	cout<<"Enter priority\n";
	cin>>newnode->priority;
	cout<<"Enter data\n";
	cin>>newnode->info;
	if(start==NULL){
	start=tail=newnode;
	newnode->link=NULL;	
	}
	else{
		temp=start;
		while(temp->priority<newnode->priority){
			temp=temp->link;
		}
	}
	
}
