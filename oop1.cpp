#include <iostream>
using namespace std;

class student
{
    public:
        string name;
        int age;
        double cgpa;
};

int main()
{
    student s1;

    s1.name = "Harshit";
    s1.age  = 18;
    s1.cgpa = 8.5;

    cout << s1.name <<endl;
    cout << s1.age << endl;
    cout << s1.cgpa << endl;
}
