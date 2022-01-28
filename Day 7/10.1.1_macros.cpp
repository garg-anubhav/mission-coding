// macros as an alternative to inline function

#include <iostream>
using namespace std;

#define add(x, y) x + y // will give wrong output
// correct -> #define add(x, y) (x + y)

int main()
{
    cout << 4 * add(10, 20);
    return 0;
}