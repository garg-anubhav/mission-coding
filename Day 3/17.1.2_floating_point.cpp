// manipulating default format

#include <iostream>
# include <iomanip>
using namespace std;
int main()
{
    cout << std::setprecision(4);
    double x = 15.5683, y = 34267.1;
    cout << x << " " << y << "\n";
    double z = 1.23;
    cout << std::showpoint << z << "\n";   // trailing zero
    cout << std::showpos << z << "\n";     // + sign
    cout << std::uppercase << z << "\n";
    return 0;
}
