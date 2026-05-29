#include <iostream>
using namespace std;

union data 
{
    int i;
    float f;
};
int main()
{
    data d;
    d.i = 10;
    cout << d.i <<"\n";

    d.f = 5.5 ;

    cout << d.i <<"\n";
    cout << d.f <<"\n";

    return 0;
}