#include <iostream>
using namespace std;

void greet(string name)
{
    cout << "Hello, " <<   "!" << endl;
}
int main()
{
    greet();
    
    return 0 ;
}
// itts a incorrect code because we have not provided any argument to the function greet. we have to provide an argument to the function greet because it has a parameter of type string. to fix this error we can provide an argument to the function greet like this : greet("Harshit");