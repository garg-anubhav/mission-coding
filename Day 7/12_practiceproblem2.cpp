#include <iostream>
using namespace std;

void fun()
{
    static int x = 1; // called only once
    int y = 1;        // called every time the function is called
    x++;
    y++;
    cout << x << " " << y << endl;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}