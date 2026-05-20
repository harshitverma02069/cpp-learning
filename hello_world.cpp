/*

#include <iostream>

int main()
{
    std::cout << "Hello, World!\n";

    return 0;
}

*/

// This progam can be written in this way too..

#include <iostream> // header file for input and output stream
using namespace std; // using the standard namespace to avoid writing std:: before every standard library object
int main() // main function - entry point of the program
{
    cout << "Hello, World!\n"; // cout is the standard output stream object, << is the insertion operator, "Hello, World!\n" is the string to be printed, \n is a newline character
    return 0; // return 0 indicates that the program ended successfully
}