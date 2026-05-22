#include <iostream> // Include the iostream library to use input and output streams
#include <string> // Include the string library to use the string data type
using namespace std; // Use the standard namespace to avoid having to prefix standard library names with 'std::'
int main()
{
    int age =19; // Declare an integer variable named 'age' and initialize it with the value 19. The int data type is used to store whole numbers without decimal points, and it can represent both positive and negative values.
    double height = 5.9;// Declare a double variable named 'height' and initialize it with the value 5.9. The double data type is used to store floating-point numbers with double precision, which allows for more accurate representation of decimal values compared to the float data type.
    char grade = 'A'; // Declare a char variable named 'grade' and initialize it with the value 'A'. The char data type is used to store a single character, which can be a letter, digit, or symbol. In this case, 'grade' will hold the character 'A'.
    bool isStudent = true; // Declare a boolean variable named 'isStudent' and initialize it with the value true. The bool data type can hold one of two values: true or false, which are used to represent logical conditions or states.
    string name = "Harshit"; // Declare a string variable named 'name' and initialize it with the value "Harshit". The string data type allows us to store and manipulate sequences of characters, making it suitable for representing names and other textual data.

    const double PI = 3.14159; // Declare a constant variable named 'PI' of type double and initialize it with the value 3.14159. The const keyword indicates that the value of 'PI' cannot be changed after it has been initialized.


    cout << "My age is: " << age << "\n";
    cout << "My height is: " << height << "\n";
    cout << "My grade is: " << grade << "\n";
    cout << boolalpha; // Enable the display of boolean values as 'true' or 'false' instead of 1 or 0
    cout << "Am I a student? " << isStudent << "\n";
    cout << "My name is: " << name << "\n";
    cout << "The value of PI is: " << PI << "\n";
  

    return 0;
}