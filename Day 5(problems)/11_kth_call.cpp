#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "Enter the number: "
         << "\n";
    cin >> num; // num is the numer of time a function is called

    for (int i = 1; i <= num; i++)
    {
        cout << i << " ";
    }
    return 0;
}