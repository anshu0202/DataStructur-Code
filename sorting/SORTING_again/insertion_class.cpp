#include<iostream>// program for insertion sort
using namespace std;
class array{
    private:
        int arr[100],size;
    public:
        void set();
        void display();
        void sort();
};
void array::set(){
    int i;
    cout<<"Enter the size of array\n";
    cin>>size;
    cout<<"Enter elements of array\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
}
void array::display(){
    int i;
    cout<<"Elements of array are:\n";
    for(i=0;i<size;i++){
        cout<<arr[i]<<" ";
}
}
void array::sort(){
    int i,j,temp,min;
    for(i=1;i<size;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && temp<arr[j]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    array a1;
    a1.set();
    a1.display();
    a1.sort();
    cout<<"\nElements of array after sorting\n";
    a1.display();
    return 0;
}