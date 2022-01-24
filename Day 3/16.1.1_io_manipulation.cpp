#include <iostream> 
using namespace std;
int main()
{
    bool a = true; 
    cout << a << "\n";
    cout << std::boolalpha;
    cout << a << "\n";
    cout << std::noboolalpha;
    cout << a;
    return 0;
}