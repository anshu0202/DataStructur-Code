#include<iostream>
using namespace std;
void merge_sort(int [],int , int);
int main(){
    // cout<<"hii";
    int i,size;
    cout<<"Enter the size of array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array\n";
    for(i=0;i<size;i++){
        cin>>arr[size];
    }
    cout<<"Elements of array before sorting\n";
      for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    merge_sort(arr,0,size-1);
     cout<<"Elements of array after sorting\n";
      for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
void merge_sort(int arr[], int l ,int u){
    int mid=(l+u)/2;
    if(l<u){
        merge_sort(arr,l,mid);
        merge_sort(arr,mid+1,u);
    }
}
