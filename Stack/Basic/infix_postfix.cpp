#include<iostream>
using namespace std;
void push(char);
void pop(char);
char post[20];
char stack[20];
int head=-1,top=-1,j=0;
int main(){
    int size;
    cout<<"Enter the number of character in the infix expression\n";
    cin>>size;
    char infix[size];
    cout<<"Enter a infix expression\n";
    cin>>infix;
    int i=0;
  while(i<size){
    //   cout<<infix[i]<<" "<<endl;
    //   cout<<infix[i]<<endl;
         if(infix[i]=='('){
            push(infix[i]);
        }
        else if(top!=-1){
        if((infix[i]=='*' || infix[i]=='/') && (stack[top]=='*' ||stack[top]=='/') ){
            pop(infix[i]);
        }
        else if((infix[i]=='*' || infix[i]=='/') && (stack[top]=='+' ||stack[top]=='-') ){
            push(infix[i]);
            // cout<<"king is king";
        }

        else if((infix[i]=='+' || infix[i]=='-') && (stack[top]=='*' ||stack[top]=='/') ){
            pop(infix[i]);
        }
        else if((infix[i]=='+' || infix[i]=='-') && (stack[top]=='+' ||stack[top]=='-') ){
           pop(infix[i]);
        }
         else if(infix[i]>0 || infix[i]<10){
            // cout<<"hii1\n";
           post[j]=infix[i];
           j++;
        }
        }
        else if(infix[i]=='+' || infix[i]=='-'|| infix[i]=='/' || infix[i]=='*' ){
                push(infix[i]);
        }
        else if(infix[i]==')'){
                    pop(infix[i]);
        }
        else if(infix[i]>0 || infix[i]<10){
            // cout<<"hii1\n";
           post[j]=infix[i];
           j++;
        }
      i++;
  }
//    cout<<"stack top 0= "<<stack[0]<<endl;
//   cout<<"stack top 1= "<<stack[1]<<endl;
//   cout<<" top = "<<top<<endl;
//   cout<<"j = "<<j<<endl;
//   cout<<"post top = "<<post[j-1];
  if( top>=0){
    //   cout<<"king";
      int k=top;
      for(i=j;k>=0;i++){
          post[i]=stack[k];
          k--;
      }
  }
  for(i=0;i<=size+1;i++){
      cout<<post[i]<<" ";
  }
    return 0;

}
void push(char c){
    // cout<<c<<"salman1\n";
if(top==-1){
    top=head=0;
    stack[top]=c;
}
else{
    top++;
    stack[top]=c;
}
// cout<<"top in pop is "<<top<<endl;
// cout<<"top data "<<stack[top]<<endl;
}
void pop(char c){
    if(c==')'){
        while(1){
            if(stack[top]=='('){
                    break;
            }
             post[j]=stack[top];
                    j++;
                    top--;
        }
        if(stack[top]=='('){
             post[j]=stack[top];
                    j++;
                    top--;
        }
        return ;
    }
        while(1){
            if(top==-1){
                break;
            }
            if((c=='+' || c=='-') && (stack[top]=='+' || stack[top]=='+')){
                    post[j]=stack[top];
                    j++;
                    top--;
                    // cout<<"hello, top= "<<top<<endl;
            }
            else  if((c=='*' || c=='/') && (stack[top]=='*' || stack[top]=='/')){
                    post[j]=stack[top];
                    j++;
                    top--;
                    // cout<<"king\n";
            }
            else if((c=='+' || c=='-') && (stack[top]=='*' ||stack[top]=='/')){
                 post[j]=stack[top];
                    j++;
                    top--;
                    // cout<<"king5\n";
            } 
            else if(stack[top]==')'){
                // cout<<"king2";
                    break;
            }
            //   else if(c=='+'|| c=='-'||c=='*'|| c=='/'){
            //      post[j]=stack[top];
            //         j++;
            //         top--;
            // }
            else  if((c=='*' || c=='/') && (stack[top]=='+' || stack[top]=='-')){
                //   cout<<"lion\n";
                   break;
            }
            else{
                // cout<<"king8";
                break;
            }
        }
        // cout<<"jolly\n";
        push(c);
}