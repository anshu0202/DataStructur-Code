#include<iostream>
using namespace std;
class singlelink_list{
	private:
        class new_node{
        public:
            int data;
            new_node *next;
        };
		new_node *head=NULL,*temp;
	public:
		void insert(int data1){
			new_node *node= new new_node;
			node->data=data1;
			node->next=NULL;
			if(head==NULL){
				head=temp=node;
			}
			else{
				temp->next=node;
				temp=node;
			}
		}
		void display(){
			temp=head;
			cout<<"Elements of linked list are:\n";
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout << endl;
		}
};
int main(){
	singlelink_list *ptr;
	ptr=new singlelink_list;
	int key=1;
	while(key!=-1){
		cout<<"Enter value to insert\n";
		cin>>key;
		if(key==-1){
            break;
		}
		ptr->insert(key);
	}
	ptr->display();
}