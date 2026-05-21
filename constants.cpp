#include <iostream>
using namespace std;
int main()
{
    const float PI = 3.14;
    cout << "The value of PI is " << PI << "\n";
    //PI = 3.14159; // This line will cause an error because 'PI' is a constant variable, which means its value cannot be changed after it has been initialized.
    return 0;
}