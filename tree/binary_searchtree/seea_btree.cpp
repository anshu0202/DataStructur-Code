#include<iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node *right; 
};
node *root=0;
node *newnode;
node *create(){
    int y;
    node *n;
    n = new node;
    cout<<"Enter the value of root node:"<<endl;
    cin>>y;
    n->data = y;
    return n;
}
node *add(){
    int x;
    node *n;
    n = new node();
    cout<<"Enter the value to insert: ";
    cin>>x;
    if(x==-1){
        return 0;
    }
    else{
        n->data = x; 
         if(x<root->data){
           n->left = add();
         }
         if(x>root->data){
           
           n->right = add();
         }
    }
    return n;
}
void preOrder(node *root){
         if(root == 0){
             return;
         }
         cout<<root->data<<" ";
         preOrder(root->left);
         preOrder(root->right);
}
int main(){
    root = create();
    newnode = add();
    preOrder(root);
}
