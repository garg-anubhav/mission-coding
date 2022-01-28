#include <iostream>
using namespace std;

// compiler error because default arguments should be declared last
void printDetails(int id, string name = "NA", string address)

// no compiler error on executing below code
//  void printDetails(int id, string address, string name = "NA")
{
    cout << "Id is " << id << "\n";
    cout << "Name is " << name << "\n";
    cout << "Address is " << address << "\n";
}

int main()
{
    printDetails(111, "Anubhav", "Bokaro");
    cout << "\n";
    printDetails(222, "Abhishek");
    cout << "\n";
    printDetails(333);
    cout << "\n";
    return 0;
}