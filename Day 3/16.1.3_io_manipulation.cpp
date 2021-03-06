// showbase, counter -> noshowbase
// showpos, counter -> noshowpos
// uppercase, counter -> nouppercase

#include <iostream> 
using namespace std;
int main()
{
    int a = 26;
    cout << std::showbase;
    cout << std::oct;
    cout << a << "\n";
    cout << std::hex;
    cout << a << "\n";
    
    // show pos puts a + sign before the positive number
    cout << std::showpos;
    cout << a << "\n";
    cout << std::uppercase;
    cout << a << "\n";
    return 0;
}