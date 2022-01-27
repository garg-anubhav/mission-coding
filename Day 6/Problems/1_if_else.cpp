#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the integer: ";
    cin >> num;

    if (num > 5)
        cout << "Greater than 5";
    else if (num < 5)
        cout << "Less than 5";
    else
        cout << "Equal to 5";
    return 0;
}