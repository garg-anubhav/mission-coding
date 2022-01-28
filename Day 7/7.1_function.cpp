// function without parameters

#include <iostream>
using namespace std;

void fun()
{
    cout << "fun() called";
}

int main()
{
    cout << "Before calling fun()"
         << "\n";
    fun();
    cout << "\n";
    // function called twice
    fun();
    cout << "\n";
    cout << "After calling fun()";
    return 0;
}
