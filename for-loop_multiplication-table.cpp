#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Hey buddy, which number's table do you want to learn?"
         << endl;
    cin >> n;
    cout << "\n";

    for (int i = 1; i <= 10; i++)
    {
        cout << n << "X" << i << "=" << n * i << endl;
    }

    return 0;
}