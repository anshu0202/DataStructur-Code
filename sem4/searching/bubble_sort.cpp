#include<iostream>
using namespace std;
int main(){
    int size,i,round,temp;
    cout<<"Enter the size of array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of array\n";
        for(i=0;i<size;i++){
            cin>>arr[i];
        }
    cout<<"Elemenst of array before sorting\n";
           for(i=0;i<size;i++){
            cout<<arr[i]<<"  ";
        }
        for(round=1;round<size;round++){
          for(i=0;i<size-round;i++){
              if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
              }
        }
        }
         cout<<"\nElemenst of array after sorting\n";
           for(i=0;i<size;i++){
            cout<<arr[i]<<"  ";
        }
      return 0;
    }
   