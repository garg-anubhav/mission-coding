#include <iostream>
using namespace std;
int main()
{
    int x = 0, y = 0;
    cout << "Enter a choice: \n";
    char move;
    cin >> move;
    switch (move)
    {
    case 'L':
        x--;
        break;
    case 'R':
        x++;
        break;
    case 'U':
        y--;
        break;
    case 'D':
        y++;
        break;
    default:
        cout << "Invalid choice";
        break;
    }
    cout << x << " " << y;
    return 0;
}