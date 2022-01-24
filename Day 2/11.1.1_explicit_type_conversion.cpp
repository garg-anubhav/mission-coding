// c style explicit conversion

#include <iostream>
using namespace std;
int main()
{
    int x = 15, y = 2;
    // explicit
    double z = double (x)/y;
    // original --> double z = x/y;
    cout << z;
    return 0;
}