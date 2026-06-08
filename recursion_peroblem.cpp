#include <iostream>
using namespace std;

void pattern(int n)
{
    if(n == 0)
        return;

    cout << n;

    pattern(n-1);

    cout << n;
}

int main()
{
    int n = 5;
    pattern(n);
    cout << endl;
    return 0;
}