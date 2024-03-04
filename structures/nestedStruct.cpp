#include <iostream>

using namespace std;

struct Address
{
    string city;
    string no;
};
struct staff
{
    uint8_t id;
    string name;
    string surname;
    string department;
    Address address;
};

int main(int argc, char const *argv[])
{
    staff employee = {123, "Berker", "GUR", "IT",{"Malatya","44"}};

    cout << employee.name + "'s from " + employee.address.city << endl;

    return 0;
}
