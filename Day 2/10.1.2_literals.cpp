// using suffixes in integer literals

#include <iostream>
using namespace std;
int main()
{
    int a = 124;
    unsigned int b = 124u;
    long int c = 124l;
    long long int d = 124ll;
    cout << a << "\n" << b << "\n" << c << "\n" << d;
    return 0;
}