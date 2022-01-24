// floating point literals

#include <iostream>
using namespace std;
int main()
{
    float a = 10.5f;
    double b = 10.515;
    float c = 2.1e15f;
    double d = 200.1e-80;
    double e = 0x1A.1p2;
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e;
    return 0;
}