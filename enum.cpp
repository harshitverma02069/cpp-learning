#include <iostream>
using namespace std;

enum Direction
{
    LEFT,
    RIGHT,
    UP,
    DOWN
};

int main()
{
    Direction move = UP;

    cout << move << endl;

    return 0;

}