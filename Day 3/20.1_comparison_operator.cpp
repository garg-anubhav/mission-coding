#include <iostream>
using namespace std;
int main()
{
    int x = 10, y = 20;
    cout << (x < y) << " " << (x > y) << " "
         << (x == y) << " " << (x >= y) << " "
         << (x <= y) << " " << (x != y);
    return 0;
}