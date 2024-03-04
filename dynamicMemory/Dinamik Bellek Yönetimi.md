

Kullanılacak değer önceden tahsis edilerek bellekte yer ayrılır işem bittikten sonra bellekteki alan serbest bırakılarak sistem kullanımına sunulur.

###### Örnek -1

```
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{  
    // Integer veri tipinde yani 4 byte bir adresi benim içi ayır ve bu adresi pointerda tut.
    int *ptr = new int ;
    
    // Daha önce tahsis edilen konuma git ve buraya 10 değerini ata.
    *ptr = 10;
    cout << "My PTR             : "<< *ptr << endl;
    
    // Bu adersteki değer ile rastgele bir işlem yapıldı.
    int result = *ptr * 2;
    cout << "Sonuc              : " << result << endl;

    // Daha önce int değişkenimiz için tahsis edilen alanı serbest bırakarak sistemin kullanımına izin veriyoruz.

    delete ptr;  

    cout << "Where is the PTR   : "<< *ptr << endl;
    
    return 0;
}
```

###### Örnek -2

```
#include <iostream>

using namespace std;

//---------------------------------------Call Func--------------------------------------------//
void getSize(int *size);
void setInput(int *ptr,int *size);
void getOutput(int *ptr,int *size);
//---------------------------------------MAIN-------------------------------------------------//

int main(int argc, char const *argv[])
{
    int *values  = new int;
    int *size    = new int;
      
    getSize(size);
    setInput(values,size);
    getOutput(values,size);  

    delete values;
    delete size;  

    return 0;
}

//---------------------------------------getSize----------------------------------------------//
void getSize(int *size)
{
    cout << "Kullanmak istediginiz alani girin : ";
    cin >> *size;
}
//---------------------------------------setInput---------------------------------------------//
void setInput(int *ptr,int *size)
{
    for (int i = 0; i < *size; i++)
    {
        cout << i+1 << ". Deger : ";
        cin >> ptr[i];
    }
}
//---------------------------------------getOutput--------------------------------------------//
void getOutput(int *ptr,int *size)
{
    for (int i = 0; i < *size; i++)
    {
        cout << i+1 << ". Deger : " << ptr[i] << endl;
    }    
}
//---------------------------------------END--------------------------------------------------//
```