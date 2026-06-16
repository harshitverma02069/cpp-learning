#include <iostream>
using namespace std;
int main()
{
    stack<int> s;
    s.push(5);
    s.push(10);

    s.pop();

    s.push(20);

    cout << s.top() << endl;

    return 0;
}