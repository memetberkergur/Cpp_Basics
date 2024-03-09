#include <iostream>

using namespace std;

class Staff
{
private:

    string name;
  
public:
    Staff (string name)
    {
        this -> name = name;
    }
    friend void showName(Staff employee);
};

// Normalde class'ın içerisindeki private değerlere aşağıdaki gibi erişilemez.
// Friend ile tanımlayarak kullanabiliyoruz.
void showName(Staff employee)
{
    cout << "Girilen Ad: " << employee.name << endl;
}

int main(int argc, char const *argv[])
{
    Staff employee("Berker");
    showName(employee);

    return 0;
}
