#include <iostream>
using namespace std;
int main()
{
    
    cout <<bool (0) << "\n"; // In C++, when we convert an integer to a boolean using the bool() function, any non-zero integer will be converted to true (which is represented as 1), while zero will be converted to false (which is represented as 0). Therefore, when we convert the integer 0 to a boolean, it will output 0, indicating that it is false.    
    cout << bool (10) << "\n"; // When we convert the integer 10 to a boolean using the bool() function, it will output 1, indicating that it is true, because any non-zero integer is considered true in C++.
    cout << bool (-5) << "\n"; // When we convert the integer -5 to a boolean using the bool() function, it will output 1, indicating that it is true, because any non-zero integer (including negative integers) is considered true in C++. Therefore, -5 will be converted to true (1) when cast to a boolean.
    return 0;
}