#include <iostream>
using namespace std;

class A
{
private:
    int a, b;
    int *p;

public:
    A()
    {
        a = 0;
        b = 0;
        // p = new int;
    }
    A(int x, int y, int z)
    {
        a = x;
        b = y;
        p = new int;
        *p = z;
    }
    void getVal()
    {
        cout <<a<<" "<<b<<" "<<*p;
    }
};

int main()
{
    A o1, o2, o3(3, 7, 9);
    o3.getVal();
    return 0;
}
