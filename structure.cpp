#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    float marks;
};

int main()
{
    student s1;
    student s2;

    s1.name = "Harshit";
    s2.name = "anurag";
    s1.age = 19;
    s1.marks = 95.5;

    cout << s1.name <<"\n";
    cout << s2.name <<"\n";
    cout << s1.age <<"\n";
    cout << s1.marks<< "\n";

    return 0;
}