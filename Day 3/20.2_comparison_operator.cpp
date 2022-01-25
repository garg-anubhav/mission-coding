#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 20;
    auto res = x <=> y;
    if (res < 0)
        cout << "x ix less";
    else if (res > 0)
        cout << "x is more";
    else
        cout << "both are same";
    return 0;
}