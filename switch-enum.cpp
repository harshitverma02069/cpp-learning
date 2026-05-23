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
    Direction move = RIGHT;

    switch (move)
    {
    case LEFT:

        cout << "Move Left\n";

        break;

    case RIGHT:

        cout << "Move Right\n";

        break;

    case UP:

        cout << "Move Up\n";

        break;

    case DOWN:

        cout << "Move Down\n";

        break;
    }
    

    return 0;
}