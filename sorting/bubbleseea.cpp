#include<iostream>
using namespace std;
int main(){
    int i, n,j,k,temp;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements : "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i+1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"After sorting : "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
