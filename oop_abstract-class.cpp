#include <iostream>
using namespace std;

class animal
{
    public:
    virtual void sound() = 0;
};

class dog : public animal
{
    public:
    void sound()
    {
        cout << "bark\n";
    }
};
int main()
{
    dog d1;
    d1.sound();
}