#include <iostream>
using namespace std;

int main()
{
    int password;
    cout << " what's the password you want to set ,please write :" << endl;
    cin >> password;

    cout << "now lets check it out";
    cout << "'\n";

    int PASSWORD = 0;
   
    while (PASSWORD != password)
    {
         cout << "what's the PASSWORD ?"<< endl;
         cin >> PASSWORD;
    }

    cout << " Acess Granted" << endl;
    
    return 0;
}


    
