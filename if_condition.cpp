#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Hey buddy what's your age ?" << endl;
    cin >> age;
    
    if(age >=18)
    {
        cout << "Adult" << endl;
    }

    return 0;
}