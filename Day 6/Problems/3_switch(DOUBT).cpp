#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    switch (n)
    {
    case '1':
        if (n == 1)
            cout << "One";
        break;
    case '2':
        if (n == 1)
            cout << "Not One";
        break;
    default:
        cout << "Unknown";
        break;
    }
    return 0;
}