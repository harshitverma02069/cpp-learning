#include <iostream>
using namespace std;

int main()
{
    int age; 
    cout << "Hey buddy, What's your age?" << endl;
    cin >> age;
    
    bool hasID;
    cout << "Doy you have some id , (type 1 for yes and 0 for no)" << endl;
    cin >> hasID;
    

    if(age >=18)
    {
        if(hasID)
    {
        cout << "Entery allowed" << endl;
    }

    }

    else 
    {
        cout << "Sorry sir you are not allowed!" << endl;
    }

    return 0;

}