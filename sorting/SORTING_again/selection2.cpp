#include<iostream>
using namespace std;
void create(int *, int);
void display(int *, int);
void sort(int *arr, int size);
int main(){
    int size;
    cout<<"Enter size of array\n";
    cin>>size;
    int arr[size];
    create(arr,size);
    cout<<"Elements before sorting\n";
    display(arr,size);
    sort(arr,size);
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
void sort(int *arr, int size){
    int i,min,j,temp;
    for(i=0;i<size;i++){
        min=i;
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}