#include <iostream>
using namespace std;

int main()
{
    int password;
    
    do 
    {
        cout << " Enter password: "<< endl;
        cin >> password;
    }
    while (password != 1234 );

    cout << "Access Granted"<< endl;
    return 0;
}