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
    staff* pointerOfStaff = &employee;

    cout << pointerOfStaff ->name + " " + pointerOfStaff->surname << endl;

    return 0;
}
