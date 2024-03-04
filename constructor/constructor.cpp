#include <iostream>

using namespace std;
////////////STAFF//////////////////
class staff
{
    
private:
    string name;

public:
    staff(string input_name = "")
    {
        name = input_name;
    }
    void show()
    {
        cout << name << endl;
    }
};
///////////MAIN///////////////////

int main(int argc, char const *argv[])
{
    staff person("Constructor Test");
    staff* person_ptr = new staff("Test with Pointer");
    
    person.show();
    person_ptr -> show();

    return 0;
}
 