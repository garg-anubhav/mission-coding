// nested if... else...

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n > 0)
    {
        cout << "Positive ";
        if (n % 2 == 0)
            cout << "Even";
        else
            cout << "Odd";
    }

    if (n < 0)
    {
        cout << "Negative ";
        if (n % 2 == 0)
            cout << "Even";
        else
            cout << "Odd";
    }

    else
        cout << "Zero";
    return 0;
}