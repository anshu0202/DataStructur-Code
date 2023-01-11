#include<iostream>
using namespace std;
struct node{
	int data;
	node *link;
};
node *newnode,*head=0,*temp,*pretemp;
void del_start();
void del_end();
void any_position();
int main(){
	int choice=1,sel;
	while(choice){
		newnode=new node;
		cout<<"Enter value of node\n";
		cin>>newnode->data;
		newnode->link=0;
		if(head==0){		
		head=temp=newnode;
	}
		else{
			temp->link=newnode;
			temp=newnode;
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	} 
	temp=head;
	cout<<"Value of element of nodes are:\n";
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}	
	cout<<"\nEnter 1 to delete the first node\n";
	cout<<"Enter 2 to delete the last node\n";
	cout<<"Enter 3 to delete the node at the specific location\n";
	cin>>sel;
	switch(sel){
		case 1:  del_start(); break;
		case 2: del_end(); break;
		case 3:any_position(); break;
		default : cout<<"Choose valid option\n";
	}
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}
}
void del_start(){
	pretemp=head;
	head=head->link;
	delete(pretemp);
	temp=head;
	cout<<"\nAfter deleting the first node\n";
}
void del_end(){
	temp=head;
	while(temp->link!=0){
		pretemp=temp;
		temp=temp->link;
	} 
	pretemp->link=0;
	delete(temp);
	cout<<"After deleting  the last node ";
}
void any_position(){
	int pos,i=0;
	cout<<"\nEnter the position where you want to delete node\n";
	cin>>pos;
	temp=head;
	while(i<pos-1){
		pretemp=temp;
		temp=temp->link;
		i++;
	}
	pretemp->link=temp->link;
	delete(temp);
	cout<<"After deleting the node at location "<<pos<<endl;
}
