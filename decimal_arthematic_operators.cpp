#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 3;

    cout << (double) a + b << "\n";
    cout << (double) a - b << "\n";
    cout << (double) a * b << "\n";
    cout << (double) a / b << "\n";
    cout <<  a % b << "\n"; // here no double because % this operator only work for integer not for decimal.

    return 0;

}