#include <iostream>

using namespace std;

void pointerErisimTesti(int *ptr);

int main(int argc, char const *argv[])
{
    // Örnek 1
    // Pointer nedir? 
    /*
    int myValue = 10;
    int *pointer = &myValue;
    cout << &myValue << endl;   // Değişkenimin bellek adresi.
    cout << pointer << endl;    // Değişkenimin bellek adresini tutan pointer.
    cout << *pointer << endl;   // Pointerımın tuttuğu değer.
    cout << myValue << endl;    // Değişkenimin kendisi.
    cout << &pointer << endl;   // pointerımın bellek adresi.
    */

    // Örnek 2
    // Pointer ile değer değiştirme
    /*
    int myValue = 10;
    int *pointer = &myValue;
    pointerErisimTesti(pointer);
    cout << myValue;
    */
    // 
    
    // Örnek 3
    
    
    int myArray[4] = {1,2,3,4};
    int *pointer = myArray;
    cout << *(pointer +1) << endl;
    
    
  
    return 0;
}

void pointerErisimTesti(int *ptr)
{
    cout << *ptr << endl;
    *ptr = *ptr + 1;
    cout << *ptr << endl;
}
