#include <iostream>
using namespace std;
void create(int);
void check();
void check2();
void delete_node();
int max_tree[20];
int size = 0, range = 0;
void create(int key)
{
    max_tree[size] = key;
    size++;
    if (size > 1)
    {
        check();
    }
}
void display()
{
    int i;
    if (range == 0)
    {
        cout << "Tree is empty\n";
    }
    else
    {
        cout << "\nElements of tree are:\n";
        for (i = 0; i < range; i++)
        {
            cout << max_tree[i] << "  ";
        }
    }
}
void delete_node()
{
     int temp;
     if(size>2){
    temp = max_tree[0];
    max_tree[0] = max_tree[size - 1];
    max_tree[size - 1] = temp;
    size--; 
     check2();
 }
 else  if(max_tree[0]>max_tree[1]){
    {
        temp = max_tree[0];
    max_tree[0] = max_tree[1];
    max_tree[1] = temp;
     }
 }
      
}
void check()
{
    int i, temp;
    i = size - 1;
    while (i != 0)
    {
        if (max_tree[i] > max_tree[(i - 1) / 2])
        {
            temp = max_tree[i];
            max_tree[i] = max_tree[(i - 1) / 2];
            max_tree[(i - 1) / 2] = temp;
        }
        i = (i - 1) / 2;
    }
}
void check2()
{
    int i = 0, temp;
    while (((i*2+2) <= size - 1))
    {
        if (max_tree[(i * 2) + 1] > max_tree[(i * 2) + 2] && max_tree[(i * 2) + 1] > max_tree[i])
        {
            temp = max_tree[(i * 2) + 1];
            max_tree[(i * 2) + 1] = max_tree[i];
            max_tree[i] = temp;
            i = (i * 2) + 1;
        }
        else if (max_tree[(i * 2) + 1] < max_tree[(i * 2) + 2] && max_tree[(i * 2) + 2] > max_tree[i])
        {
            temp = max_tree[(i * 2) + 2];
            max_tree[(i * 2) + 2] = max_tree[i];
            max_tree[i] = temp;
            i = (i * 2) + 2;
        }
    }
}
int main()
{
    int choice = 1, i, k;
    char sel;
    while (choice != -1)
    {
        cout << "Enter value to store(-1 to exit)\n";
        cin >> choice;
        if (choice == -1)
        {
            break;
        }
        create(choice);
    }
    k = range = size;
    display();
    while (k > 1)
    {
        delete_node();
        k--;
    }
    cout <<"\nAfter sorting using heap sort";
    display();
    return 0;
}