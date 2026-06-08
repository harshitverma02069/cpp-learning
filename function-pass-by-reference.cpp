#include <iostream>
using namespace std;

void change(int &x)
{
    x = 100;
}

int main()
{
    int a = 10;
    cout << "Before change: " << a << endl;
    change(a);
    cout << "After change: " << a << endl;
    cout << "now a is changed to 100 because we passed it by reference." << endl;
    cout <<"see a =" << " " <<a << endl;
    return 0;
}