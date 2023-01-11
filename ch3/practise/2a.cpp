#include<iostream>//insertion 
using namespace std;
struct node{
	int data;
	node *link;
};
struct node *head=0,*tail=0;
void insert_last();
void insert_beg();
void display();
void insert(int);
int main(){
	node *newnode,*temp;
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
	display();
	cout<<"\n****************************************\n";
	cout<<"Enter the location where to insert a newnode\n";
	cin>>loc;
	if(loc==1){
		insert_beg();
		cout<<"Linked list after insertion at the begging\n";
		display();
	}
	else if(loc==count+1){
		insert_last();
		cout<<"Linked list after insertion at the end\n";
		display();
	}
	else if(loc>1 && loc<count){
		insert(loc);
		cout<<"After insertion \n";
		display();
	}
	else {
		cout<<"Invalid location\n";
	}
}
void insert_last(){
	node *newnode,*temp;
	cout<<"Enter the value to insert\n";
	newnode=new node;
	cin>>newnode->data;
	tail->link=newnode;
	tail=newnode;
	tail->link=head;
}
void insert_beg(){
	node *newnode;
	cout<<"Enter the value to insert\n";
	newnode= new node;
	cin>>newnode->data;
	newnode->link=head;
	head=newnode;
	tail->link=head;
}
void display(){
	node *temp;
	temp=head;
	while(temp->link!=head){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
	cout<<temp->data;
}
void insert(int loc){
	node *pnode,*newnode;
	int i=1;
	pnode=head;
	while(i<loc-1){
		pnode=pnode->link;
		i++;
	}
	cout<<"Enter value to insert\n";
	newnode=new node;
	cin>>newnode->data;
	newnode->link=pnode->link;
	pnode->link=newnode;
}
