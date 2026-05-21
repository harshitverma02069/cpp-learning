#include <iostream> // Include the iostream library to enable input and output operations
using namespace std; // Use the standard namespace to avoid having to prefix standard library names with 'std::'

int main() // The main function is the entry point of the program where execution begins
{
    int age = 19; // Declare an integer variable named 'age' and initialize it with the value 19
    float height = 5.11; // Declare a float variable named 'height' and initialize it with the value 5.11
    char grade = 'C' ; // Declare a char variable named 'grade' and initialize it with the value 'C'
    bool isStudent = true; // Declare a bool variable named 'isStudent' and initialize it with the value true
    double pi = 3.14159; // Declare a double variable named 'pi' and initialize it with the value 3.14159
    cout << "My age is: " << age <<"\n"; // Output the value of 'age' to the console
    cout << "My height is: " << height << "\n"; // Output the value of 'height' to the console
    cout << "My grade is: "<< grade << "\n"; // Output the value of 'grade' to the console
    cout << boolalpha; 
    cout << "Am I a student? " << isStudent << "\n"; // Output the value of 'isStudent' to the console, which will display 'true' due to the use of boolalpha
    cout << "The value of pi is: " << pi << "\n"; // Output the value of 'pi' to the console
    return 0; // Return 0 to indicate that the program ended successfully
}
/*
In this code snippet, we declare and initialize variables of different data types: int, float,
char, bool, and double. We then use the cout statement to output the values of these variables to the console. The boolalpha manipulator is used to display the boolean value as 'true' instead of '1'. When the program is executed, it will display the age, height, grade, student status, and the value of pi in a human-readable format.
*/