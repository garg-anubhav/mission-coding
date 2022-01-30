// gcd of 2 numbers

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 2 nos.: ";
    cin >> a >> b;

    int x = min(a, b);
    int ans = 1;

    for (int i = 1; i <= x; i++)
    {
        if (a % i == 0 && b % i == 0)
            ans = i;
    }
    cout << ans;
    return 0;
}