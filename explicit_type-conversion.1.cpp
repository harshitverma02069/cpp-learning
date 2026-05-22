#include <iostream>
using namespace std;
int main()
{
    double x = 10.99;
    int y = static_cast<int>(x);          // Explicit type conversion (double to int) using C++ style cast. This will truncate the decimal part and assign the value 10 to 'y'.
    cout << "Value of x = " << x << "\n"; // Output the value
    cout << "Value of y = " << y << "\n"; // Output the value of 'y' to the console, which is 10 due to the explicit type conversion that truncated the decimal part of 'x'.
    return 0;
}