#include <iostream>
using namespace std;
int main()
{
    // auto must be intialized at the time of declaration because the compiler needs to deduce the type of the variable from the intializer. If we declare an auto variable without intilization, the compiler will not be able to determine the type of the variable, which will result in a compilation error. Therefore, it is mandatory to intialize an auto variable at the time of declaration to allow the compiler to deduce its type correctly.
    auto a = 10; // Declare a variable 'a' using the auto keyword and initialize it with the value 10. The auto keyword allows the compiler to automatically deduce the type of the variable based on the initializer, so 'a' will be deduced as an int in this case.
    auto b = 3.14; // Declare a variable 'b' using the auto keyword and initialize it with the value 3.14. The auto keyword allows the compiler to automatically deduce the type of the variable based on the initializer, so 'b' will be deduced as a double in this case.
    auto c = 'A'; // Declare a variable 'c' using the auto keyword and initialize it with the value 'A'. The auto keyword allows the compiler to automatically deduce the type of the variable based on the initializer, so 'c' will be deduced as a char in this case.
    auto d = true; // Declare a variable 'd' using the auto keyword and initialize it with the value true. The auto keyword allows the compiler to automatically deduce the type of the variable based on the initializer, so 'd' will be deduced as a bool in this case.
    auto e = "Hello, World!"; // Declare a variable 'e' using the auto keyword and initialize it with the value "Hello, World!". The auto keyword allows the compiler to automatically deduce the type of the variable based on the initializer, so 'e' will be deduced as a const char* in this case.
    cout << "Value of a = " << a << "\n";
    cout << "Value of b = " << b << "\n";
    cout << "Value of c = " << c << "\n";
    cout << "Value of d = " << d << "\n";
    cout << "Value of e = " << e << "\n";

    return 0;
}