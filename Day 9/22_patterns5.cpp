// inverted triangle pattern

#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n;
    cout << "Enter n: ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i)
        {
            cout << " ";
            j++;
        }

        while (j <= n)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}