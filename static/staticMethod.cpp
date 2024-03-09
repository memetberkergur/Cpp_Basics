#include <iostream>

using namespace std;

class mat
{
    public:

    static void cube(const int num)
    {
        cout << num*num*num << endl;
    }

    static void square(const int num)
    {
        cout << num*num << endl;
    }
};

int main(int argc, char const *argv[])
{   
    //static methotlar aşağıdaki gibi obje üretilmeden kullanılabilir.
    mat::cube(3);
    mat::square(4);
    return 0;
}
