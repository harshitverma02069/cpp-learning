#include <iostream>
using namespace std;

class student
{
    public:
    int age;
    student(int a)
    {
        age = a;
    }
    student(const student& other)
    {
        cout << "copying...\n";
        age = other.age;
    }
};

int main()
{
    student s1(20);
    student s2 = s1; // copy constructor is called here
    return 0;
}