#include <iostream>
using namespace std;

int main()
{
    bool isStudent = true; // Declare a boolean variable named 'isStudent' and initialize it with the value true

    cout << "Am I a student? " << isStudent << "\n"; // Output the value of 'isStudent' to the console, which will display '1' since we haven't enabled boolalpha

    return 0;
}

/*
hyy the output will be displayed as '1' 
so to display the output as 'true' or 'false' instead of '1' or '0', we can use the boolalpha manipulator from the iostream library.
This manipulator allows us to display boolean values as 'true' or 'false' instead of '1' or '0'. 
To use it, we can simply insert 'cout << boolalpha;' before outputting the boolean variable. 
This will enable the display of boolean values in a more human-readable format. 
After enabling boolalpha, when we output the 'isStudent' variable, it will display 'true' instead of '1'.
*/  