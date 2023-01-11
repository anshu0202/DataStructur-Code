#include<iostream>
using namespace std;
int a[100],size,front=-1,rear=-1;
void enqueue();
void dequeue();
void display();
int main(){
	int choice=1,sel;
	cout<<"Enter size of queue\n";
	cin>>size;
	while(choice){
		cout<<"Enter 1 for enqueue\n";
		cout<<"Enter 2 for dequeue\n";
		cout<<"Enter 3 to display\n";
		cin>>sel;
		switch(sel){
			case 1:enqueue(); break;
			case 2: dequeue();break;
			case 3:display();break;
			default :cout<<"Choose valid option\n";
		}
		cout<<"Do you want to continue(0,1)\n";
		cin>>choice;
	}
}
void enqueue(){
	if(rear==size-1 && front=0  || front=rear+1){
		cout<<"Queue is full\n";
	}
	else if(rear==-1 && front==-1){
		rear++;
		front++;
		cout<<"Enter value to enqueue\n";
		cin>>a[rear];
	}
	else{
		cout<<"Enter value to enqueue\n";
			rear=(rear+1)%size;
		cin>>a[rear];
	}
}
void dequeue(){
	if(front==-1){
		cout<<"Queue is empty\n";
	}
	else if(front==rear){
		cout<<a[front]<<" is dequeue\n";
		front=rear=-1;
	}
	else if(front= size-1){
		cout<<a[front]<<" is dequeue\n";
		front=0;
	}
	else{
		cout<<a[front]<<" is dequeue\n";
		front++;
	}
}
void display(){
	int i;
	if(front==-1 && rear==-1){
		cout<<"Queue is empty\n";
	}
	else {
		cout<<"Element of queue are\n";
		for(i=front;i<=rear;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}		
}
