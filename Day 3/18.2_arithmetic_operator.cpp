// unary operator

#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = x++;   //increment postfix
    int z = ++x;   //increment prefix
    int w = x--;   //decrement postfix
    int u = --x;   //decrement prefix
    cout << x << "\n" << y << "\n" << z;
    return 0;
}