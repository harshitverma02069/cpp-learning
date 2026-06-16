#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << pq.top() << endl; // prints the top element of the priority queue, which is 30  
}