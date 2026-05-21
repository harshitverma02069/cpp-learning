#include <iostream>
using namespace std;
 
int main()
{
    bool isStudent = true; // Declare a boolean variable named 'isStudent' and initialize it with the value true

    cout << boolalpha; // Enable the display of boolean values as 'true' or 'false' instead of 1 or 0
    cout << "Am I a student? " << isStudent << "\n"; // Output the value of 'isStudent' to the console, which will display 'true' due to the use of boolalpha

    return 0;
}