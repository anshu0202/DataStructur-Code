#include<iostream>
using namespace std;
int main(){
     int size,i,j,temp;
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
        for(i=1;i<size;i++){
            temp=arr[i];
            j=i-1;
            while(j>=0  && arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }
             arr[j+1]=temp;
        }
        cout<<"\nElemenst of array after sorting\n";
           for(i=0;i<size;i++){
            cout<<arr[i]<<"  ";
        }
    return 0;
}