#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the year: ";
    cin >> n;

    if ((n % 4 == 0) || (n % 100 == 0))
        cout << "The year is leap year.";
    else
        cout << "The year is not a leap year.";
    return 0;
}