#include<iostream>//floyd's algorithm
using namespace std;
struct node{
	int data;
	struct node *link;
};
void display(struct node*);
void check_loop(struct node*);
struct node* reverse(struct node*);
int main(){
	int choice=1;
	bool x;
	struct node *head=0,*temp,*newnode;
	while(choice){
		cout<<"Enter value of node\n";
		newnode= new node;
		if(head==0){
			cin>>newnode->data;
			newnode->link=0;
			temp=head=newnode;
		}
		else{
			cin>>newnode->data;
			temp->link=newnode;
			temp=newnode;
			temp->link=0;
		}
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Elements of linked list are\n";
	 display(head);
	 check_loop(head);
	 
}
void display(struct node *head){
	struct node *temp;
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->link;
	}	
}
void check_loop(struct node* head){
	struct node *hare,*tortoise;
	int flag=0;
	hare=tortoise=head;
	while(hare!=0 && hare->link!=0){ // smjh nhii aaya
		tortoise=tortoise->link;
		hare=hare->link->link;
		if(hare==tortoise){
			cout<<"\nLoop is present \n";
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"\nLoop is not present in linked list\n";
	}

}

