#include <iostream>
using namespace std;
void printDetails(int id, string name = "NA", string address = "NA")
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