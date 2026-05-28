#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   string s = "Hello";
   string x = "acbd";
   reverse(s.begin(), s.end());
   sort(x.begin(), x.end());

   cout << x << endl;

   cout << s <<endl ;
   return 0;
}
