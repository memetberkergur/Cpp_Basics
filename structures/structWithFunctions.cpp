#include <iostream>

using namespace std;

struct staff
{
    uint16_t id;
    string name;
    string surname;
    string department;
};

void show(staff employee);
void showButWithPointer(staff *employee);

int main(int argc, char const *argv[])
{
    // 1-)
    staff employee1 = {123, "Berker", "GUR", "IT"};
    show(employee1);

    // 2-)
    staff *pointerOfemployee1 = &employee1;
    showButWithPointer(pointerOfemployee1);

    // 3-)
    show(employee1);

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
void show(staff employee)
{
    cout << employee.id << endl;
    cout << employee.name << endl;
    cout << employee.surname << endl;
    cout << employee.department << endl;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
void showButWithPointer(staff *employee)
{
    cout << employee->id << endl;
    cout << employee->name << endl;
    cout << employee->surname << endl;
    employee->department = "R&D";
    cout << employee->department + " Department is changed." << endl;
}
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//