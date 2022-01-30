// lcm of 2 numbers

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter 2 nos.: ";
    cin >> a >> b;

    int start = max(a, b);
    int end = a * b;
    int ans = start;

    for (int i = start; i <= end; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            ans = i;
            break;
        }
    }
    cout << ans;
    return 0;
}