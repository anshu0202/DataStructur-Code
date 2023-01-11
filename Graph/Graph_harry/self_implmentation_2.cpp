#include<iostream>
using namespace std;
struct node{
	int data;
	 int count=0;
	struct node *arr[];
};
struct node *head=NULL;
struct node *arr2[10];
int wncount=0;
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
		cout<<"Whole number of node is "<<wncount<<endl;
	//	while(x<wncount){
			int i=0;
			while(i<=wncount-1){			
				cout<<temp->arr[i]->data<<"  ";
				i++;
			}
		//	x++;
		//}
}
void create(){
	struct node *newnode;
	newnode= new node;
	if(head==NULL){
		head=newnode;
		cout<<"Enter value to store\n";
		cin>>newnode->data;
		newnode->arr[0]=newnode;
		wncount++;
		newnode->count++;
	}
	else{
		int select;
		struct node *temp;
		cout<<"Enter value to store\n";
		cin>>newnode->data;
		wncount++;
		int choice=1;
		while(choice==1){
			int select;
			cout<<"Enter value of vertices to which it has to link\n";
			cin>>select;
			temp=head;
			int x=1,i=0; 
			   	while(x<=wncount){	   		
				if(temp->arr[i]->data==select)
				    {
				    	cout<<"Value of i is "<<i<<endl;
				    	cout<<"Temp data is "<<temp->arr[i]->data<<endl;
					temp->arr[temp->count]=newnode;
					temp->count=temp->count+1;
					break;
				    }
				else{
					x++;
					i++;
				    }			   
			}
			       cout<<"Do you want to link with other vertex also(0,1)?\n";
		            cin>>choice;
		}
		}
	}
