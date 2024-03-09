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
    friend class FriendStaff;
};


// Friend olarak tanımlanan aşağıdaki class sayesinde Staff sınıfının private 
// özelliklerine erişim sağlandı.
class FriendStaff
{  
public:
    static void showName (Staff emp)
    {
        cout << "Girilen Ad: " << emp.name << endl;
    }
};

int main(int argc, char const *argv[])
{
    Staff employee("Berker");
    FriendStaff::showName(employee);
    return 0;
}