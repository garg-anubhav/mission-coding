// op == 1 --> addition
// op == 2 --> subtraction
// op == 3 --> multiplication

#include <iostream>
using namespace std;
int main()
{
    int op, x, y;
    cout << "Enter operation code and x and y: ";
    cin >> op >> x >> y;

    if (op == 1)
        cout << x + y;
    else if (op == 2)
        cout << x - y;
    else if (op == 3)
        cout << x * y;
    else
        cout << "Invalid input";
    return 0;
}