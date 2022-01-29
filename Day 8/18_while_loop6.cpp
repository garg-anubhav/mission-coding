// infinite loop

#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    while (i < 5)
        ;
    {
        cout << "Testing \n";
        i = i + 2;
    }
    return 0;
}