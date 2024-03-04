#include <iostream>

using namespace std;
////////////STAFF//////////////////
class staff
{
    
private:
    string name;

public:
    staff(string name)
    {
        this -> name = name;
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
    person.show();

    return 0;
}
 