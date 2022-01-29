// finding first digit of a number

#include <iostream>
using namespace std;

int find_first_digit(int n)
{
    while (n > 10)
    {
        n = n / 10;
    }
    return n;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << find_first_digit(n);
    return 0;
}