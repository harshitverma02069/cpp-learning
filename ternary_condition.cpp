#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Hey buddy, What's your age" << endl;
    cin >> age;

    (age >= 18) ? cout << "Adult\n" : cout << "Minor\n";

    return 0;
}