#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Hey buddy whats your marks" <<endl;
    cin >> marks;

    if( marks >=95)
    {
        cout << "congrats you got\n A+" << endl;
    }

    else if(marks >= 90)
    {
        cout << "congrats you got\n A" << endl;
    }

    else if(marks >= 80)
    {
        cout << "congrats you got\n B+" << endl;
    }

    else if(marks >=70)
    {
        cout << "congrats you got\n B" << endl;
    }

    else if(marks >=60)
    {
        cout << "congrats you got\n C+" << endl;
    }

    else if(marks >=50)
    {
        cout << "congrats you got\n C" <<endl;
    }

    else if(marks >=40)
    {
        cout << "congrats you got\n D+" <<endl;
    }

    else if(marks >=30)
    {
        cout << "congrats you got\n D" << endl;
    }

    else 
    {
        cout << "opps! you are fail." << endl;
    }

    return 0;
}
// program stops at first true condition.