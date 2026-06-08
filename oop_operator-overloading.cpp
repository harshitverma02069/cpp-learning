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
    student operator+(const student& other)
    {
        student temp(0);
        temp.age = age + other.age;
        return temp;
    }
};
int main()
{
    student s1(20);
    student s2(30);     
    student s3 = s1 + s2; // operator+ is called here
    cout << "s3 age: " << s3.age << endl; // Output: s3 age: 50
    return 0;
}