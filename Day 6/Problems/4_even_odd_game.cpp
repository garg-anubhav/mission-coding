#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number: ";
    cin >> a;

    if (a % 2 != 0)
        cout << "You win"; // first selection is always mine
    else
        cout << "Friend wins";
    return 0;
}