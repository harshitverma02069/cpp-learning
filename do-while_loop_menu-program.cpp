#include <iostream>
using namespace std;

int main()
{
    int choice;
    do 
    {
        cout << "\n1. play\n";
        cout << "2. settings\n";
        cout << "3. Exit\n";

        cin >> choice;
    }
    while (choice != 3);

    cout << "Game Closed"<< endl;
    return 0;
}