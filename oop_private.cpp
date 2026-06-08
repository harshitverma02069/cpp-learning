#include <iostream>
using namespace std;

class student
{
    private:
    int age;

    public:
    void setage(int a)
    {
        age = a;
    }
    void showage()
    {
        cout << age << endl;
    }
};

int main()
{
    student s1;
    s1.setage(25);
    s1.showage();
    return 0;
}