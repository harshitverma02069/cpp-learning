#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "what's your age ??" << endl;
    cin >> age;

    if(age >=18)
    {
        cout << "Adult"<< endl;
    }

    else 
    {
        cout << "Minor" << endl;
    }

    return 0;
}