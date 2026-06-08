#include <iostream>
using namespace std;

void print(int x)
{
    cout << "Integer : " << x << endl;  
}
void print(double x)
{
    cout << "Double : " << x << endl;  
}
void print(string x)
{
    cout << "String : " << x << endl;
}
int main()
{
    print(10);
    print(3.14);
    print("Hello");
    return 0;
}
// in this code we have three functions with same name but different parameters. this is called function overloading. we can use same name for different functions as long as they have different parameters. the compiler will determine which function to call based on the arguments passed to the function. in this code we