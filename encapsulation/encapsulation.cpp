#include <iostream>

using namespace std;

class staff
{
private:

    string name;
  
public:
    void setName(string input_name = "Default Name")
    {   
        name = input_name;
    }
    string getName()
    {
        return name;
    }

};

int main(int argc, char const *argv[])
{
    staff person1;
    string myName = "Berker";
    person1.setName(myName);
    cout << person1.getName() << endl;

    

    return 0;
}
