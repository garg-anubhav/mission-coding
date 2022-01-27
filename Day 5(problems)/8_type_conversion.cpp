// typecast double to int

#include <iostream>
using namespace std;
int main()
{
    double d;
    cout << "Enter the number to be typecasted: ";
    cin >> d;
    cout << "\n";

    d = int(d);
    cout << "The type casted number is: " << d;
    return 0;
}