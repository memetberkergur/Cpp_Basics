#include <iostream>

using namespace std;

class staff
{
private:
    string name;
public:
    void inputStruct(string tempName)
    {   
        name = tempName;
    }
    void show()
    {
        cout << name << endl;
    }
};
    
int main(int argc, char const *argv[])
{
    staff employee;
    employee.inputStruct("TEST");
    employee.show();
    return 0;
}
