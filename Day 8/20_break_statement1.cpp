#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int x = 2; x <= n; x++)
    {
        if (n % x == 0)
        {
            cout << "Smallest divisor is: " << x;
            break;
        }
    }
    return 0;
}