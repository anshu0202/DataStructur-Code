#include <bits/stdc++.h>	

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/
//     int top=-1,front=-1;
//     Node *arr[50];
//     void enqueue(Node *N){
//         if(front==top==-1){
//             top++;
//             front++;
//             arr[top]=N;
//         }
//         else{
//             top++;
//             arr[top]=N;
//         }
//     }
// void dequeue(){
//     if(front==top!=-1){
//         cout<<arr[top]->data<<" ";
//         front=top=-1;
//     }
//     else{
//         cout<<arr[front]->data<<" ";
//         front++;
//     }
// } 
   
    void levelOrder(Node * root) {
   Node *temp;
   temp=root;
//    enqueue(root);
   while(temp->left || temp->right){
       if(temp->left==NULL && temp->right==NULL){
           break;
       }
       else if(temp->left!=NULL && temp->right!=NULL){
           
       }
   }

};
 //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
	myTree.levelOrder(root);
    return 0;
}
