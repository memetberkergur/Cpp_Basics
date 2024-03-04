#include <iostream>

using namespace std;
////////////STAFF//////////////////
class staff
{
    
private:
    string name;
    string *ptr;
public:
    // Constructor
    staff(string value)
    {
        ptr = new string;
        *ptr = value;
    }
    // Destructor
    ~staff()
    {
        cout << "Destructor Cagrildi" << endl;
    }
    void show()
    {
        cout << *ptr << endl;
    }
};

///////////MAIN///////////////////
int main(int argc, char const *argv[])
{
    staff* person = new staff("Constructor Test");    
    person->show();
    delete person;

    return 0;
}
 