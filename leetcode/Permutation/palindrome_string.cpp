#include<iostream>
using namespace std;
int palindrome(string);
int main(){
    string str;
    int ans=0;
    cout<<"Enter string\n";
    cin>>str;
    ans=palindrome(str);
    if(ans==1){
        cout<<"Entered string is palindrome\n";
    }
    else{
        cout<<"Entered string is not a string\n";
    }
    return 0;
}
int palindrome(string str){
    int i=0,j,size;
    size=str.length();
    // cout<<"Length is "<<size;
    j=size-1;
    while(i<j){
        if(str[i]==str[j]){
            i++;
            j--;
        }
        else{
            return 0;
        }
    }
    return  1;
}