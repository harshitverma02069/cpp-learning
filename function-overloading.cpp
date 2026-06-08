#include <iostream>
using namespace std;
void print()
{
    cout << "Hello";
}
void print()
{
    cout << "world";
}

int main()
{
    print();
    return 0;
}
// its a incorrect code because we have two functions with same name and same parameters. so it will give us an error of redefinition of function. this is called function overloading. to avoid this error we can use different parameters for each function.  '