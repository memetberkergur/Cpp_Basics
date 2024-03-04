#include <iostream>

using namespace std;


struct staff
{
    uint8_t id;
    string name;
    string surname;
    string department;
};


int main(int argc, char const *argv[])
{
    staff employee = {123,"Berker","GUR","IT"};
    cout << employee.name + " " + employee.surname <<endl;

    // employee degerini değiştirme

    employee.department = "R&D";

    cout << employee.department << endl;


    return 0;
}
