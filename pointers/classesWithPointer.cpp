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
    staff* person = new staff();

    person -> setName("Berker");
    cout << person -> getName();

    return 0;
}
