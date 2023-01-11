#include<iostream>
using namespace std;
/*
Two algorithm of graph traversal are:
-Breadth First Search (BFS) -> implement with the help of queue data structure
-Deapth First search (DFS) -> implement with the help of stack data structure
*/
struct node{
	int data;
	struct node *link1,*link2;
};
struct node *head=NULL,*temp;
int main(){
	struct node* newnode;
	int choice=1;
	while(choice==1){
		newnode=new node;
		cout<<"Enter data\n";
		cin>>newnode->data;
		if(head==NULL){
			head=temp=newnode;
			newnode->link1=NULL;
			newnode->link2=NULL;
		}
		else if(temp->link1==NULL){
			temp->link1=newnode;
			newnode->link1=NULL;
			newnode->link2=NULL;
		}
		else if(temp->link2==NULL){
			temp->link2=newnode;
			newnode->link1=NULL;
			newnode->link2=NULL;
			temp->link1->link2=temp->link2;
		}
	//	temp->link1->link2=temp->link2;
		cout<<"Do u want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Elements of graph are:\n";
	cout<<temp->data<<endl;
	cout<<temp->link1->data<<endl;
	cout<<temp->link1->link2->data<<endl;
	return 0;
}
