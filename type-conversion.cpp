#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    double y = x; // Implicit type conversion (int to double)
    cout << "Value of x =" << x << "\n"; // Output the value of 'x' to the console, which is 10
    cout << "Value of y =" << y << "\n"; // Output the value of 'y' to the console, which is 10.0
    return 0;
}