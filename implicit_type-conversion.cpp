#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    int x = ch; // Implicit type conversion (char to int)
    cout << "Value of ch = " << ch << "\n"; // Output the value of 'ch' to the console, which is 'A'
    cout << "Value of x = " << x << "\n"; // Output the value of 'x' to the console, which is 65 (ASCII value of 'A')
    return 0;
}