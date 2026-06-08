#include <iostream>
using namespace std;
void hello()
{
    cout << "Hello" << endl;
    hello(); // this is a recursive call to the function hello. it will call itself until it reaches the base case. but in this code we have not defined any base case so it will keep calling itself indefinitely and eventually it will give us a stack overflow error.
}
int main()
{
    hello();
    return 0;
}
// in this code we have a function hello that calls itself. this is called recursion. recursion