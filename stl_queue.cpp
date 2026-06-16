#include <iostream>
#include<queue>
using namespace std;
int main()
{


queue<int> q;
q.push(5);
q.push(10);
q.push(15);

cout << q.front() << endl; // prints the front element of the queue, which is 5
cout << q.back() << endl; // prints the back element of the queue, which is 15
return 0;
}
