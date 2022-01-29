#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        cout << "Testing \n";
        i = i + 1;
    }
    cout << "Bye";
    return 0;
}