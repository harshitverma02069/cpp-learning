#include <iostream>
using namespace std;
class animal
{
    public:
          virtual  void sound()
           {
                cout << "Animal";
           }
};

class dog : public animal
{
    public :
    void sound()
    {
        cout << "Dog";
    }
};

class cat : public animal
{
    public: 
      void sound()
      {
        cout << "Cat";
      }
};

class lion : public animal
{
    public:
    void sound()
    {
        cout << "Lion";
    }
};

int main()
{
    dog d1;
    cat c1;
    lion l1;
    animal* ptr = &d1;
    animal* ptr1 = &c1;
    animal* ptr2 = &l1;

    ptr->sound();
    cout << endl;
    ptr1->sound();
    cout << endl;
    ptr2->sound();
    cout << endl;
    return 0;
}