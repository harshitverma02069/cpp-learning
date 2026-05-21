#include <iostream>
using namespace std;
// contexpr function
constexpr int square(int x)
{
    return x*x;

}
int main()
{
    //value calculated at compile time
    
    constexpr  int ans = square(5);
    cout << ans << "\n";
    return 0;
}
/*
in this constexpr function compiler can calculate it before the program runs, which can lead to faster execution since the value is already known at compile time.
this program demonstrates the use of a constexpr function in C++. A constexpr function is a function that can be evaluated at compile time, which allows for certain optimizations and can be used in contexts where constant expressions are required. In this example, we define a constexpr function named 'square' that takes an integer 'x' and returns the square of 'x'. In the main function, we declare a constexpr variable named '
*/