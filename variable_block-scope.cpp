#include <iostream>
using namespace std;
int main()
{
    {
        int y = 5;
        cout << y << "\n"; // This line will output the value of 'y' to the console, which is 5, because 'y' is accessible within this block.
    }

   // cout << y; // This line will cause an error because 'y' is not accessible outside of the block in which it was declared.
    return 0;
}
/*
when { } ends ---- variable disappears 
*/