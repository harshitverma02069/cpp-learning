#include <iostream>
using namespace std;

enum Status
{
    SUCCESS = 200,
    NOT_FOUND = 404,
    ERROR = 500
};

int main()
{
    Status network = NOT_FOUND;

    cout << network << endl;

    return 0;
}