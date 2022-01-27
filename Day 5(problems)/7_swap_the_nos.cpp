#include <iostream>
using namespace std;
int main()
{
     int a = 10, b = 20, c;
     cout << "a = " << a << "\n"
          << "b = " << b << "\n"
          << "\n";

     c = a;
     a = b;
     b = c;
     cout << "a = " << a << "\n"
          << "b = " << b << "\n"
          << "\n";
     return 0;
}