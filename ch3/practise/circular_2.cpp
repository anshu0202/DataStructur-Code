#include<iostream>//insertion
using namespace std;
struct node{
	int data;
	node *link;
};
node *head=0,*tail;
void insert_last();
int main(){
	node *tail,*newnode,*temp;
	int choice=1,loc,count=0;
	while(choice){
		cout<<"Enter value of node\n";
		newnode=new node;
		cin>>newnode->data;
		if(head==0){
			head=tail=newnode;
			newnode->link=tail;
		}
		else{
			tail->link=newnode;
			tail=newnode;
			tail->link=head;	
		}
	++count;
		cout<<"Do you want to continue(0,1)\n";
		cin>>choice;
	}
	cout<<"Total no. node are \n"<<count;
	cout<<"\nElements of linked list are\n";
	temp=head;
	while(temp->link!=head){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<temp->data;
	cout<<"\n****************************************\n";
	cout<<"Enter the value to be inserted at the end \n";
	newnode=new node;
	cin>>newnode->data;
	tail->link=newnode;
	tail=newnode;
	newnode->link=head;
	cout<<"\nElements of linked list after inserting at the end are\n";
	temp=head;
	while(temp->link!=head){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<temp->data;
}

