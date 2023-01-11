#include<iostream>//deletion
using namespace std;
struct node{
	int data;
	node *link;
};
struct node *head=0,*tail=0;
void del_last();
void del_beg();
void display();
void deletion(int);
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
	cout<<"Enter the location where you want to delete a node\n";
	cin>>loc;
	if(loc==1){
		del_beg();
		cout<<"Linked list after deleting the first node\n";
		display();
	}
	else if(loc==count){
		del_last();
		cout<<"Linked list after deleting the last node\n";
		display();
	}
	else if(loc>1 && loc<count){
		deletion(loc);
		cout<<"After deleting the node at location "<<loc<<" \n";
		display();
	}
	else {
		cout<<"Invalid location\n";
	}
}
void del_last(){
	node *temp;
	temp=head;
	while(temp->link!=tail){
		temp=temp->link;
	}
	temp->link=head;
	delete(tail);
	tail=temp;
}
void del_beg(){
	tail->link=head->link;
	delete(head);
	head=tail->link;	
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
void deletion(int loc){
	node *temp,*pnode;
	int i=1;
	temp=head;
	while(i<loc){
		pnode=temp;
		temp=temp->link;
		i++;
	}
	pnode->link=temp->link;
	delete(temp);
}
