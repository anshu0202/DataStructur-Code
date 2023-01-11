#include<iostream>// in best case order of complexity in (nlogn)
using namespace std;
void create(int *, int);
void display(int *, int);
void  sort(int *, int ,int);
int partion(int *arr,int left , int right);
int main(){
    int size;
    cout<<"Enter size of array\n";
    cin>>size;
    int arr[size];
    create(arr,size);
    cout<<"Elements before sorting\n";
    display(arr,size);
    sort(arr,0,size-1);
     cout<<"\nElements after sorting\n";
    display(arr,size);
    return 0;
}
void create(int *arr,int size){
    int i;
    cout<<"Enter elements of array\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
}
void display(int *arr, int size){
    int i;
    cout<<"Elements of array are:\n";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void sort(int *arr, int left,int right){
    int loc;
    if(left<right){
            loc=partion(arr,left,right);
            sort(arr,left,loc-1);
            sort(arr,loc+1,right);
    }
}
int partion(int *arr,int left , int right){
      int pivot,temp,start,end;
  pivot=arr[left];
  start=left;
  end=right;
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
         while(arr[end]>pivot){
            end--;
        }
        if(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
    }
    }
     temp=arr[left];
      arr[left]=arr[end];
      arr[end]=temp;
      return end; 
}