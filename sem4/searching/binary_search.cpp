#include<iostream>
using namespace std;
int search(int *arr, int ub, int up, int key);
int main(){
    int size,i,round,temp,key,key2;
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
        //  cout<<"\nElemenst of array after sorting\n";
        //    for(i=0;i<size;i++){
        //     cout<<arr[i]<<"  ";
        // }
        cout<<"\nEnter the value to search\n";
        cin>>key;
        key2=search(arr,0,size-1,key);
        if(key2==-1){
            cout<<key<<" is not present in the array\n";
        }
        else{
             cout<<arr[key];
        }
       
      return 0;
    }
    int search(int *arr, int lb, int ub, int key){
            int mid=(ub+lb)/2;
            if(lb<ub){
            if(arr[mid]==key){
                return mid;
            }
            else{
                if(arr[mid]>key){
                     search(arr,0,mid-1,key);
                }
                else{
                  search(arr,mid+1,ub,key);
                }
            }
            }
            return -1;
    }
   