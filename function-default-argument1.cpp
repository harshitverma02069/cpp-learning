#include <iostream>
using namespace std;

void greet(string name = "Guest")
{
    cout << "Hello, " << name << "!" << endl;
}
int main()
{    greet(); // it will use the default argument "Guest"
    greet("Harshit"); // it will use the provided argument "Harshit"
    return 0 ;
}
// in this code we have a function greet that takes a string parameter name with a default argument "Guest". if we call the function greet without providing any argument, it will use the default argument "Guest". if we call the function greet with an argument, it will use the provided argument instead