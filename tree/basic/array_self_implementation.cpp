#include <iostream>
using namespace std;
int tree[20];
int size = -1;
int root(int);
int set_left(int);
int set_right(int);
int root(int key);
void print();
int root(int key)
{
	if (tree[0] != '\0')
	{
		cout << "Tree already has a root node whose value is " << tree[0];
	}
	else
	{
		size++;
		tree[0] = key;
	}
	return 0;
}
int main()
{
	int x;
	char choice = 'y';
	cout << "Enter the value of root node\n";
	cin >> x;
	root(x);
	while (choice == 'y')
	{
		cout << "Enter left child\n";
		cin >> x;
		set_left(x);
		cout << "Enter right child\n";
		cin >> x;
		set_right(x);
		size++;
		cout << "Do you want to continue (y=yes & n = no)?\n";
		cin >> choice;
	}
	cout << "Elements of tree are \n";
	print();
	return 0;
}
int set_left(int key)
{
	if ((size - 1) / 2 < 0)
	{
		cout << "index of parent node and its value is " << (size - 1) / 2 << " and " << tree[(size - 1) / 2] << endl;
		tree[(2 * size + 1)] = key;
		cout << "index of left child node is " << (2 * size + 1) << endl;
	}
	else if (tree[(size - 1) / 2] == '\0')
	{
		cout << "cannot set as child node of " << tree[(size - 1) / 2] << " at index " << size;
	}
	else
	{
		cout << "index of parent node and its value is " << (size - 1) / 2 << " and " << tree[(size - 1) / 2] << endl;
		tree[(2 * size + 1)] = key;
		cout << "index of left child node is " << (2 * size + 1) << endl;
	}
	return 0;
}
int set_right(int key)
{
	if ((size - 1) / 2 < 0)
	{
		cout << "index of parent node and its value is " << (size - 1) / 2 << " and " << tree[(size - 1) / 2] << endl;
		tree[(2 * size + 2)] = key;
		cout << "index of right child node is " << (2 * size + 2) << endl;
	}
	else if (tree[(size - 1) / 2] == '\0')
	{
		cout << "cannot set as child node of " << tree[(size - 1) / 2] << " at index " << size;
	}
	else
	{
		cout << "index of parent node and its value is " << (size - 1) / 2 << " and " << tree[(size - 1) / 2] << endl;
		tree[(2 * size + 2)] = key;
		cout << "index of right child node is " << (2 * size + 2) << endl;
	}
	return 0;
}
void print()
{
	int i;
	for (i = 0; i <= size; i++)
	{
		if ((i - 1) / 2 < 0 || (i - 1) / 2 == '\0')
		{
			cout << "-";
		}
		else
		{
			cout << tree[i] << endl;
			if (tree[2 * i + 1] != '\0')
			{
				cout << "Left child node of " << tree[i] << " is " << tree[2 * i + 1] << endl;
			}
			if (tree[2 * i + 2] != '\0')
			{
				cout << "Right child node of " << tree[i] << " is " << tree[2 * i + 2] << endl;
			}
		}
	}
}
