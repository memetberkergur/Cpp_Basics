#include <iostream>

using namespace std;

struct Address
{
    string city;
    string code;
};
struct Staff
{
    uint8_t id;
    string name;
    string surname;
    string department;
    Address* address;
};

int main(int argc, char const *argv[])
{   
    
    Address newAddress = {"Malatya","44"};
    Staff employee = {123,"Berker", "GUR", "IT",&newAddress};
    Staff* employeeOfPointer = &employee;
    cout << employeeOfPointer->name + "'s from " + employeeOfPointer->address->city << endl;

    return 0;
}
