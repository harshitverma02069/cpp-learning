#include <iostream>
using namespace std;
int main()
{
    cout << sizeof(int) << "\n";    // The sizeof operator is used to determine the size of a data type in bytes. In this case, it will output the size of the int data type, which is typically 4 bytes on most systems.
    cout << sizeof(float) << "\n";  // This line will output the size of the float data type, which is typically 4 bytes on most systems.
    cout << sizeof(char) << "\n";   // This line will output the size of the char data type, which is typically 1 byte on most systems.
    cout << sizeof(bool) << "\n";   // This line will output the size of the bool data type, which is typically 1 byte on most systems.
    cout << sizeof(double) << "\n"; // This line will output the size of the double data type, which is typically 8 bytes on most systems.
    return 0;
}