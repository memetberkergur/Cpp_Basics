#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{   
    // Pointer oluşturuluyor fakat bellekte herhangi bir adres göstermemesi sağlandı.
    int *ptr = nullptr;
    // Şimdi pointerımıza bir değer ayıralım.
    ptr = new int;
    *ptr = 10;
    cout << ptr << " - " << *ptr << endl;
    delete ptr;
    cout << ptr << " - " << *ptr << endl;

    return 0;
}
