#include <iostream> 
using namespace std;

int main()
{
    cout << (5 > 3 && 10 > 7) << "\n";
    cout << (5 > 6 && 10 > 11) << "\n";
    cout << (5 > 6 && 10 > 7) << "\n";
    cout << ( 5> 4 && 10 > 11) << "\n\n";
         
    
    cout << (5 > 3 || 10 > 7) << "\n";
    cout << (5 > 6 || 10 > 11) << "\n";
    cout << (5 > 6 || 10 > 7) << "\n";
    cout << ( 5> 4 || 10 > 11) << "\n\n";

    cout << !(5 > 3) << "\n";
    cout << !(5 > 6) << "\n";
    
    return 0;
}