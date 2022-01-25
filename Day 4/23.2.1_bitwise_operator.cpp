// left shift operator

#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    cout << (x << 1) << endl;
    cout << (x << 2) << endl;
    int y = 4;
    int z = (x << 4);
    cout << z;
    return 0;
}