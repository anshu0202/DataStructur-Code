#include<iostream>
using namespace std;
struct node{
    int data;
    node *left;
    node *right; 
};
 node *root=0;
node *create(){
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
         cout<<"Enter the left child of "<<x<<endl;
         n->left = create();
         cout<<"Enter the right child of "<<x<<endl;
         n->right = create();
         
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
void inOrder(node *root){
         if(root == 0){
             return;
         }
         
         preOrder(root->left);
         cout<<root->data<<" ";
         preOrder(root->right);
}
void postOrder(node *root){
         if(root == 0){
             return;
         }
         postOrder(root->left);
         postOrder(root->right);
         cout<<root->data<<" ";
}
int main(){
    root = create();
    cout<<"\npre Order is: "<<endl;
    preOrder(root);
    cout<<"\nIn Order is: "<<endl;
    inOrder(root);
    cout<<"\npost Order is: "<<endl;
    postOrder(root);
}
