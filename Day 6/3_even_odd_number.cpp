#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number";
    cin >> a;

    if (a % 2 == 0)
        cout << "Player 1 wins.";
    else
        cout << "Player 2 wins.";
    return 0;
}