#include <iostream>
using namespace std;
int main()
{
    auto x = 10;
    auto y = 10.5;

    cout << "Size of x = " << sizeof(x) << " bytes\n"
         << " hence , x became integer\n";
    cout << "Size of y = " << sizeof(y) << " bytes\n"
         << " hence , y became double\n";

    return 0;
}

/* so without auto:
 you manually tell compiler:
" This is an int."
With auto:
Compiler figure it out itself.
*/