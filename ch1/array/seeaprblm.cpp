#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int i,n,key,loc;
    cout<<"Enter the no. of elements in an array: ";
    cin>>n;
    int arr[n+2];
    cout<<"\nEnter the elements of array: ";
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }
    cout<<"The array before insertion : ";
    for(i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
//     if(i>100){
//         cout<<"\nArray is full.";
//     }
   //  else{
    cout<<"\nEnter the element to insert: ";
    cin>>key;
    cout<<"\nEnter the location to insert: ";
    cin>>loc;
    for(i=n+1;i>loc;i--){
        arr[i+1] = arr[i];
    }
    arr[i] = key;
    cout<<"\nThe inserted array is : ";
    for(i=1;i<=n+1;i++){
        cout<<arr[i]<<" ";
    }
     }
    
//}
