#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cout << "Enter the number: ";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "One";
        break;
    default:
        cout << "Not One";
        break;
    }
    return 0;
}