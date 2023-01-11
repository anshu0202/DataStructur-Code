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

    void levelOrder(Node * root) {
        queue <Node*> visited;
        Node *temp=root;
        int k;
        // cout<<"initial front: "<<visited.front()<<endl;
        // cout<<"Initial size = "<<visited.size();  
        visited.push(root);
        while(temp!=NULL){
            // cout<<temp->data<<" ";
            if(temp->left!=NULL){
             
                visited.push(temp->left);
            }
            if(temp->right!=NULL){

                 visited.push(temp->right);
            }
            // if(temp==NULL){
            //     break;
            // }
            cout<<temp->data<<" "<<endl;
            if(temp==root){
                 visited.pop();
                temp=visited.front(); 
                 
            }
            else{  
                k=visited.size();
                // cout<<"Size is: "<<k<<endl;
                if(k==1){
                    break;
                }
                visited.pop();
                temp=visited.front();
                 
            }
            //  cout<<"temp data-> "<<temp->data<<" \n";  
            // cout<<"front value: "<<visited.front()<<endl;
           
            //  cout<<"Size value2 = "<<visited.size()<<endl;
        }
        cout<<"\nEnd successfully\n";
    }
}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        // std::cin >> data;
        data=rand()%1000;
        root = myTree.insert(root, data);
    }
  
	myTree.levelOrder(root);
    return 0;
}
