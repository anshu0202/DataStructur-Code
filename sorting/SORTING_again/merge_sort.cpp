#include <iostream>
using namespace std;

void create(int *, int);
void merge(int *, int, int);
void sort(int *, int, int, int);
void display(int *, int);
int main()
{
    int size;
    cout << "Enter size of array\n";
    cin >> size;
    int arr[size];
    create(arr, size);
    cout<<"Elements of array before sorting\n";
    display(arr, size);
    merge(arr, 0, size - 1);
     cout<<"\nElements of array after sorting\n";
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
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void merge(int *arr, int lb, int ub)
{
    int mid;
    if (lb < ub)
    {
        mid = (lb + ub) / 2;
        merge(arr, lb, mid);
        merge(arr, mid + 1, ub);
        sort(arr, lb, mid, ub);
    }
}
void sort(int *arr, int lb, int mid, int ub)
{
    int i, j, k, b[lb + ub];
    i = lb;
    j = mid + 1;
    k = lb;
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    for (int i = lb; i <= ub; i++)
    {
        arr[i] = b[i];
    }
}