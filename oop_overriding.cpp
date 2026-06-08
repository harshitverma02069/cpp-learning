#include <iostream>
using namespace std;

class animal
{
    public:
         void eat()
         {
              cout << "animal eat\n";
         }
};

class dog : public animal
{
    public:
         void eat()
         {
              cout << "dog eat\n";
         }
};

int main()
{
    dog d1;
    d1.eat();
    d1.animal::eat(); // to call parent class function
    return 0;
}