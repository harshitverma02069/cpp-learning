#include <iostream>
using namespace std;

int a = 100; // This variable 'a' is declared outside of any function, making it a global variable.


int main()
{
    cout << a << "\n";
    return 0;

}
// a is a gloabal variable and it can be accessed from anywhere in the program, including inside the main function.
/*
In this code snippet, we declare a global variable named 'a' and initialize it with the value 100. Since 'a' is a global variable, it can be accessed from anywhere in the program, including inside the main function. When we output the value of 'a' using cout, it will display '100' on the console. Global variables are typically used when we want to           
share data across multiple functions or when we want to maintain a value that persists throughout the entire program. However, it's important to use global variables judiciously, as they can lead to code that is harder to understand and maintain if not used carefully.
*/