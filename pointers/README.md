
Pointer nedir?
Pointer neden kullanılır?
Ben pointer kullanmadan da yaparım :-)))

Her bir bellek hücresi 1 byte'dır.
Örneğin bir integer veri tipi 4 byte yer kaplar.
Haliyle bir integer değer bellekte 4 byte (4 hücre) yer kaplar.

Örneğin;

```
int value = 10; 
```

bellek -> 10-11-12-13-14-15-16-17-18-19-20

program çalıştırıldığında tanımlanan değer için bellekte bir alan tahsis edilir.
*value* değişkenim integer olduğu için 4 byte olacak bu alanın 13-14-15-16 olduğunu farzedelim.

pointerlar işte tam olarak bu adresi daha doğrusu bu adresin başlangıç değerini tutarlar.
Şimdi *value* değişkenini bir pointera atamak isteyelim.

cpp'da pointerlar aşağıdaki gibi "*" sembolü ile tanımlanır.

```
int *pointerForMyValue;
```

Pointer'ımızı tanımladık. Peki *value* değişkenimizin adresini pointer'ımıza nasıl atayacağız? 

Bu kısımda C ve C++ dillerinde aşina olduğumuz ampersand "&" operandı bize yardımcı olur. 

C ve C++ dillerinde "&" işareti eğer değişkenin önüne getirilirse bu değişkenin bellek referansı elde edilir.

Örneğin;

```
// input
int myValue = 10;
cout << &myValue;
```


```
// Output
0x61ff0c
```

Örnek olarak verilen kodu kendi çalışma ortamınıza yapıştırıp çalıştırdığınız taktirde sizde kendi ürettiğiniz değişkeniniz için işlemciniz tarafından ram'inizin üzerinde değişkeninize tahsis edilmiş adresi görüntüleyebilirsiniz. 


```
#include <iostream>

using namespace std; 

int main(int argc, char const *argv[])
{
    int myValue = 10;

    int *pointer = &myValue;

    cout << &myValue << endl;   // Değişkenimin bellek adresi.

    cout << pointer << endl;    // Değişkenimin bellek adresini tutan pointer.

    cout << *pointer << endl;   // Pointerımın tuttuğu değer.

    cout << myValue << endl;    // Değişkenimin kendisi.

    cout << &pointer << endl;   // pointerımın bellek adresi.

    return 0;
}
```


Yukarıdaki kodun çıktısı aşağıdaki gibi olur.

```
0x61ff0c // değişkenimin bellek adresi
0x61ff0c // Pointer
10       // Pointerın tuttuğu adresteki değer.
10       // Değişkenin kendisi
0x61ff08 // Pointerın bellek adresi
```




