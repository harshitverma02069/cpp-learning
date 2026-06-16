#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> marks;

    marks["Harshit"] = 100;
    marks["Rahul"] = 95;

    cout << marks["Harshit"] << endl;
    cout << marks["Rahul"] << endl;
    return 0;
}