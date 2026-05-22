#include <iostream>
using namespace std;

int main()
{
    int player1 = 5;
    int player2 = 6;

    cout << "player1 = " << player1 << "\n";
    cout << "player2 = " << player2 << "\n";

    int common = player1 & player2;

    cout << "Common powers = " << common << "\n";
    return 0;
}