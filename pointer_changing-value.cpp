#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    int *ptr = &x;

    *ptr = 50;

    cout << x<<"\n";
    cout << &x<<"\n";
    cout << ptr<<"\n";
    cout << *ptr<<"\n";

    return 0;
}