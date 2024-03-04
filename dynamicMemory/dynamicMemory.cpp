#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{   
    // Integer veri tipinde yani 4 byte bir adresi benim içi ayır ve bu adresi pointerda tut.
    int *ptr = new int ;
    
    // Daha önce tahsis edilen konuma git ve buraya 10 değerini ata.
    *ptr = 10;
    cout << "My PTR             : "<< *ptr << endl;
    // Bu adersteki değer ile rastgele bir işlem yapıldı.
    int result = *ptr * 2;
    cout << "Sonuc              : " << result << endl;

    // Daha önce int değişkenimiz için tahsis edilen alanı serbest bırakarak sistemin kullanımına izin veriyoruz.
    delete ptr;

    cout << "Where is the PTR   : "<< *ptr << endl;

    return 0;
}
