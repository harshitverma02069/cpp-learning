#include <iostream>
using namespace std;

class Animal
{
    public:
         string name;

         void eat()
         {
               cout << "Eating" << endl;
         }
};

class Dog : public Animal
{

};

int main()
{
    Dog d1;
    d1.name = "Tommy";
    cout << d1.name << endl;
    d1.eat();
    return 0;
}