#include <iostream>
#include <string>
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

    cout << "Size of Integer (byte)     : " << sizeof(int) << endl;
    cout << "Size of Char (byte)        : " << sizeof(char) << endl;
    cout << "Size of String (byte)      : " << sizeof(string) << endl;
    cout << "Size of my struct (byte)   : " << sizeof(employee) << endl;
    cout << "Size of Double (byte)      : " << sizeof(double) << endl;
    cout << "Size of Float (byte)       : " << sizeof(float) << endl;
    cout << "Size of uint8_t (byte)     : " << sizeof(uint8_t) << endl;
    cout << "Size of uint16_t (byte)    : " << sizeof(uint16_t) << endl;

    return 0;
}
