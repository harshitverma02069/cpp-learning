#include<iostream>
using namespace std;

int main ()
{
    int x = 5;

    if( x & 1)
    {
        cout << "odd\n";
    }
    else
    {
        cout << "Even\n";
    }

    return 0;
}
