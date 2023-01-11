#include<iostream>
using namespace std;
void create();
int max_tree[20];
int size=-1;
int index;
void create(){
    cout<<"Enter value to store\n";
    if(size==-1){
        cin>>max_tree[++size];
        index=size;
    }
    else if(max_tree[index*2+1]==0  ){
        cin>>max_tree[index*2+1];
        size++;
    }
    else if(max_tree[index*2+2]==0){
        cin>>max_tree[index*2+2];
        size++;
        index=size-1;
    }  
}
void display(){
    int i;
    if(size==-1){
        cout<<"Tree is empty\n";
    }
    else{
    cout<<"\nElements of tree are:\n";
    for(i=0;i<=size;i++){
        cout<<max_tree[i]<<"  ";
    }
     }
}
int main(){
    int choice=1;
    while(choice==1){
        create();
        cout<<"Do you want to continue(0,1)?\n";
        cin>>choice;
    }
   display();
    return 0;
}