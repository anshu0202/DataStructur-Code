#include<iostream>//travering
using namespace std;
struct node{
	int data;
	node *link;
};
node *head=0;
int main(){
	node *tail,*newnode,*temp;
	int choice=1;
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
		cout<<"Do you want to continue(0,1)\n";
		cin>>choice;
	}
	cout<<"Elements of linked list are\n";
	temp=head;
	while(temp->link!=head){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<temp->data;
}
