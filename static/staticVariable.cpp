#include <iostream>

using namespace std;

void increment()
{
    int i = 10;
    i++;
    cout << "I'nin degeri : " << i << endl;
}

void static_increment()
{
    static int j = 10;
    j++;
    cout << "J'nin Degeri : " << j << endl;
}

int main(int argc, char const *argv[])
{
    increment();
    static_increment();
    static_increment();
    static_increment();
    
    return 0;
}
