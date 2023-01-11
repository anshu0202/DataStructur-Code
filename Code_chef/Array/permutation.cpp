// permutation
#include <iostream>
using namespace std;
void permut(int[], int, int);
int main()
{
    int size;
    cout << "Enter size of array\n";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    permut(arr, 0, size - 1);
    return 0;
}
void permut(int *arr, int i, int n)
{
    static int count;
    int j, k;
    if (i == n)
    {
            count++;
        for (k = 0; k <= n; k++)
        {
            cout << arr[k] << " ";
        }
        cout<<endl;
    }
    else{
         for (j = i; j <= n; j++)
        {
           swap((arr[i]),(arr[j]));
           permut(arr,i+1,n);
           swap((arr[i]),(arr[j]));
        }
    }
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}