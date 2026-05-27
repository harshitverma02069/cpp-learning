#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {7 , 2 , 9 , 1 , 5};

    int largest = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << largest<< endl;

    return 0;
}