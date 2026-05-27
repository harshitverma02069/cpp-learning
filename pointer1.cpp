#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    int *ptr = &x;

    cout << *ptr <<"\n";
    cout << ptr << "\n";
    cout << x << "\n";
    cout << &x <<"\n";

    return 0;
}