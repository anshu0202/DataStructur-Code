#include<iostream>//priority queue
using namespace std;
struct node{
	int data;
	int priority;
	node *link;
};
node *start=NULL,*temp,*newnode,*temp1,*temp2,*pnode;
int main(){
	int choice=1;
	while(choice){
		newnode=new node;
		cout<<"Enter data\n";
		cin>>newnode->data;
		cout<<"Enter priority\n";
		cin>>newnode->priority;
		newnode->link=NULL;
		if(start==NULL){
		start=temp=newnode;
		}
		else{
			temp->link=newnode;
			temp=newnode;
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Elements of queue are\n";
	temp=start;
	while(temp!=NULL){
		pnode=temp1=start;
		while(temp1!=NULL){
			if(temp1->priority>temp1->link->priority){
				temp2=temp1->link->link;
				pnode->link=temp1->link->link;
				temp1->link->link=temp1;
				temp1->link=temp2;
			}
			pnode=temp1;
			temp1=temp1->link;
		}
		temp=temp->link;
	}
	temp=start;	
	while(temp!=NULL){
		cout<<"data = "<<temp->data<<endl;
		cout<<"Priority = "<<temp->priority<<endl;
		temp=temp->link;
	}
}

