#include<iostream>
using namespace std;
struct node{
	int data,count=0;
	struct node *arr[5];
};
struct node *head=NULL;
struct node  *arr2[10];
int wncount=-1;
int visited[10],frontv=-1,rearv=-1;
int queue[10],frontq=-1,rearq=-1;
void enqueuev(int);
void displayv();
void dequeuev();
void enqueueq(int);
void displayq();
void dequeueq();
void create();
void print();
void BFS();
void create(){
	struct node *newnode,*temp;
	newnode = new node;
	if(head==NULL){
		cout<<"Enter value to store\n";
		cin>>newnode->data;
		head=newnode;
		wncount++;
		arr2[wncount]=newnode;
	}
	else{
		int value;
		cout<<"Enter the value to store\n";
		cin>>newnode->data;
		wncount++;
		arr2[wncount]=newnode;
		int choice=1;
		while(choice==1){
			cout<<"Enter the value of node to which it has to link\n";
		cin>>value;
		int x=0; 
		temp=head;
		while(x<=wncount){
			int y=0;
			while(y<arr2[x]->count+1){			
			if(arr2[x]->data==value){
				newnode->arr[newnode->count]=arr2[x];
				newnode->count++;
				arr2[x]->arr[arr2[x]->count]=newnode;
				arr2[x]->count++;
				break;
			}
			y++;
		}
			x++;
		}
		cout<<"Do you want to link with other nodes also(0,1)?\n";
		cin>>choice;
	}
	}
}
void enqueuev(int data){
	if(rearv==wncount){
		cout<<"Queue is full\n";
	}
	else if(rearv==-1){
		++rearv;
		++frontv;
		visited[rearv]=data;
	}
	else{
		++rearv;
		visited[rearv]=data;
	}
}
void dequeuev(){
	if(frontv==-1){
		cout<<"Visited Queue is empty\n";
	}
	else if(frontv==rearv){
		//cout<<"Dequeue element is "<<visited[frontv]<<endl;
		frontv =rearv=-1;
	}
	else{
	//	cout<<"Dequeue element is "<<visited[frontv]<<endl;
		++frontv;
	}
}
void displayv(){
	if(frontv==-1){
		cout<<"Visited Queue is empty\n";
	}
	else{
		int i;
		cout<<"Elements of Visited Queue are\n";
		for(i=frontv;i<=rearv;i++){
			cout<<visited[i]<<" ";
		}
		cout<<endl;
	}
}
void enqueueq(int data){
	if(rearq==wncount){
		cout<<"Visited Queue is full\n";
	}
	else if(rearq==-1){
		++rearq;
		++frontq;
		queue[rearq]=data;
	}
	else{
		++rearq;
		queue[rearq]=data;
	}
}
void dequeueq(){
	if(frontq==-1){
		cout<<"Eexploration Queue is empty\n";
	}
	else if(frontq==rearq){
		//cout<<"Dequeue element is "<<queue[frontq]<<endl;
		frontq =rearq=-1;
	}
	else{
		//cout<<"Dequeue element is "<<queue[frontq]<<endl;
		++frontq;
	}
}
void displayq(){
	if(frontq==-1){
		cout<<"Exploration Queue is empty\n";
	}
	else{
		int i;
		cout<<"Elements of Exploration Queue are\n";
		for(i=frontq;i<=rearq;i++){
			cout<<queue[i]<<" ";
		}
		cout<<endl;
	}
}
void print(){
	int x=0;
	while(x<=wncount){
		int y=0;
        cout<<"Element limked with "<<arr2[x]->data<<":   ";
		if(arr2[x]->count==1){
			cout<<arr2[x]->arr[0]->data<<" ";
		}
		else{
		while(y<=arr2[x]->count-1){
			cout<<arr2[x]->arr[y]->data<<" ";
			y++;
		}
	}
		x++;
		cout<<endl;
	}
}
void BFS(){
	int x=0,y;
	while(x<=wncount){
		enqueuev(arr2[x]->data);
		for(y=0;y<arr2[x]->count;y++){
			enqueuev(arr2[x]->arr[y]->data);
		}
		enqueueq(arr2[x]->data);
		dequeueq();
		for(y=0;y<arr2[x]->count;y++){
			enqueuev(arr2[x]->arr[y]->data);
		}
		x++;
	}
	displayv();
		displayq();
}
int main(){
	int choice=1;
	while(choice==1){
		create();
		cout<<"Do you want to continue(0,1)?\n";
		cin>>choice;
	}
	cout<<"Total no. of nodes are: "<<wncount<<endl;
	cout<<"Elements of graph are:\n";
	print();
	BFS();
	return 0;
}