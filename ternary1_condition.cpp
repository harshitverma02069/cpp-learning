#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Hey buddy, What's your marks" << endl;
    cin >> marks;

    // (condition) ? true_part : false_part ;
    // (condition) ? cout << of if : cout << of else;

    (marks >= 33) ? cout << "Congrats buddy , you PASSED\n" : cout << "Opss! FAIL\n";

    return 0;
}