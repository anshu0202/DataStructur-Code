#include<iostream>
#define n 6
using namespace std;
int stack[n];
int top = -1;

void push(){
   // int data;
    if(top == n-1){
        cout<<"overflow condition.";
    }
    else{
        cout<<"Enter the element to push: ";
      //  cin>>data;
       top++;
      cin>>stack[top];
       // data = stack[top];
    }
}

void pop(){
    int data;
    if(top == -1){
        cout<<"stack is already empty";
    }
    else{
        data = stack[top];
        top--;
        cout<<"Deleted element is : "<<data;
    }
}

void peek(){
    int data  ;
    if(top == -1){
        cout<<"stack is already empty.";
    }
    else{
    data = stack[top];
    cout<<"The topmost element is :"<<data;
    }
}

void print(){
    if(top == -1){
        cout<<"The stack is empty.";
    }
    else{
        cout<<"The elements in the stack are: \n";
//        for(int i=0;i<=top;i--){
//            cout<<stack[i];
//        }
for(int i=0;i<=top;i++){
	cout<<stack[i]<<" ";
}
    }
}
int main(){
    int choice , move;
     while(move){
     cout<<"\n\nRead these steps clearly to perform functions on stack:\n";

     cout<<"\n1. push the element.";
     cout<<"\n2. pop the top most element.";
     cout<<"\n3. print all the elements in the stack.";
     cout<<"\n4. print the topmost element.";
     cout<<"\n5. quit.\n";

     cout<<"\nEnter your choice : ";
     cin>>choice;

    switch(choice){
        case 1:
          push();
          break;
        case 2:
          pop();
          break;
        case 3:
          print();
          break;
        case 4:
          peek();
          break;  
        default:
          cout<<"Entered choice is wrong.";
    }
    cout<<"\nDo you want to continue (1/0) :";
    cin>>move;
    }
}
