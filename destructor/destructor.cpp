#include <iostream>

using namespace std;
////////////STAFF//////////////////
class staff
{
    
private:
    string name;

public:
    // Constructor
    staff(string name)
    {
        this -> name = name;
    }
    // Destructor
    ~staff()
    {
        cout << "Destructor Cagrildi" << endl;
    }
    void show()
    {
        cout << name << endl;
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
 