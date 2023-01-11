#include<iostream>
using namespace std;

struct node{
    int data;
   struct node *right,*left;
};
struct node *root;
struct node* create(){
    struct node *newnode;
       newnode = new struct node;
    
       newnode->data=5;
       newnode->left=nullptr;
       newnode->right=nullptr;

       cout<<"Entered value is "<<newnode->data;
       return newnode;
}
int main(){

    root=create();
    cout<<"\nroot data is "<<root->data;
    return 0;
}