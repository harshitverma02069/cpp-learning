#include <iostream>
using namespace std;

class Student
{
    public:
    int age ;
    Student()
    {
        age = 18;
    }
};

int main()
{
    Student s1;

    cout << s1.age << endl;
    return 0;
}