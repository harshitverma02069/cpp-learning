#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int i = 1;

    while(i <= 10)
    {
        cout << num << " x " << i << " = " << num * i << "\n";
        i++;
    }

    return 0;
}