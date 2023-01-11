#include<iostream>
using namespace std;
void permute(string,int,int);
string swap1(string,int,int);
int main(){
     string str;
    int ans=0;
    cout<<"Enter string\n";
    cin>>str;
    permute(str,0,str.length());
    return 0;
}
void permute(string str,int l,int r){
    if(l==r){
        if(str.length()==3){
        cout<<str<<"  ";
        cout<<"Length of string is "<<str.length()<<endl;
        }
        return;
    }
    for(int i=l;i<=r;i++){
        swap(str[l],str[i]);
        permute(str,l+1,r);
        swap(str[l],str[i]);
    }
}
// string swap1(string str,int l,int r){
//     char ch;
//     ch=str[l];
//     str[l]=str[r];
//     str[r]=ch;
//     return str;
// }