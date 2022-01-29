#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Anubhav " << i << endl;
    }

    /* compiler error in executing line no. 12 because
    i is defined in for loop so it is commented out */
    // cout i;
    return 0;
}