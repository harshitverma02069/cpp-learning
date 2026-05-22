#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    x += 5; // x = x + 5
    x -= 5; // x = (x + 5) - 5
    x *= 5; // x = ((x + 5) - 5 )* 5
    x /= 5; // x = (((x + 5) - 5 )* 5 ) / 5

    cout << x << "\n";
    


    return 0;

}