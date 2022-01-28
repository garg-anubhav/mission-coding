#include <iostream>
using namespace std;

// function DECLARATION
int getMax(int, int);

int main()
{
    int a = 10, b = 20;
    cout << getMax(a, b);
    return 0;
}

int getMax(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}