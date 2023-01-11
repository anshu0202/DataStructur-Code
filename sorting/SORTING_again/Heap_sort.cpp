#include <iostream> // It also works on the divide and conqure techinque
using namespace std;
/*
Max heap->
For every node i the value of node is less than or equal to its parent node value the root node has maximum value
Min heap->
For every node i the value of node is greater than or equal to its parent node value the root node has minimum value
*/
void create(int *, int);
void heap(int *, int, int);
void sort(int *, int, int, int);
void display(int *, int);
int main()
{
    int size;
    cout << "Enter size of array\n";
    cin >> size;
    int arr[size];
    create(arr, size);
    display(arr, size);
    heap(arr, 0, size - 1);
    display(arr, size);
}
void create(int *arr, int size)
{
    int i;
    cout << "Enter elements of array\n";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}
void display(int *arr, int size)
{
    int i;
    cout << "\nElements of array are :\n";
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void heap(int *arr, int lb, int ub)
{
}
void sort(int *arr, int lb, int mid, int ub)
{
}