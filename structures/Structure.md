C programlama dilinde, **struct** (yapı), bir bellek bloğunda tek bir ad altında fiziksel olarak gruplandırılmış değişkenler listesini tanımlayan ve farklı değişkenlere tek bir işaretçi ([[Pointerlar]]) aracılığıyla erişilmesine izin veren bileşik bir veri türüdür.

Kullanımını anlamak için aşağıdaki örnekler takip edilebilir.
###### Örnek -1
```
#include <iostream>
#include <string>

using namespace std;

// Örnek bir struct tanımı
struct Person {
    // Public erişim alanına sahip üye değişkenler
    string name;
    int age;
    float height;

    // Yapıcı (constructor) fonksiyon
    Person(string n, int a, float h) : name(n), age(a), height(h) {}
};

int main() {
    // Person struct'ını kullanarak bir örnek oluşturma
    Person person1("John", 25, 1.75);

    // struct üye değişkenlerine erişim
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << " meters" << endl;

    return 0;
}

```

Tanım kısmında da belirtildiği gibi structure'lara pointerlar ile de erişerek işlem yapmak mümkün. Fakat burda alışılanın aksine "." sembolü yerine "->" sembolü kullanılır.

###### Örnek -2

```
#include <iostream>

using namespace std;  

struct Address
{
    string city;
    string code;
};

struct Staff
{
    uint8_t id;
    string name;
    string surname;
    string department;
    Address* address;
};

int main(int argc, char const *argv[])
{  
    Address newAddress = {"Malatya","44"};
    Staff employee = {123,"Berker", "GUR", "IT",&newAddress};
    Staff* employeeOfPointer = &employee;

    cout << employeeOfPointer->name + "'s from " + employeeOfPointer->address->city << endl; 

    return 0;
}
```


###### Örnek -3

Struct'lar fonksiyonların input'u olarak da kullanılır. Fonksiyonlarıve structları daha iyi anlamak için aşağıdaki örneğe bakınız.

```
#include <iostream>

using namespace std; 

struct staff
{
    uint16_t id;
    string name;
    string surname;
    string department;
};  

void show(staff employee);
void showButWithPointer(staff *employee);

int main(int argc, char const *argv[])
{
    // 1-)

    staff employee1 = {123, "Berker", "GUR", "IT"};
    show(employee1);

    // 2-)
    staff *pointerOfemployee1 = &employee1;
    showButWithPointer(pointerOfemployee1); 

    // 3-)
    show(employee1); 

    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

void show(staff employee)
{
    cout << employee.id << endl;
    cout << employee.name << endl;
    cout << employee.surname << endl;
    cout << employee.department << endl;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

void showButWithPointer(staff *employee)
{
    cout << employee->id << endl;
    cout << employee->name << endl;
    cout << employee->surname << endl;
    employee->department = "R&D";
    cout << employee->department + " Department is changed." << endl;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
```



###### Örnek -4

Structlar iç içe tanımlanabilir. 

```
#include <iostream>

using namespace std;
  
struct Address
{
    string city;
    string no;
};

struct staff
{
    uint8_t id;
    string name;
    string surname;
    string department;
    Address address;
};

  

int main(int argc, char const *argv[])
{
    staff employee = {123, "Berker", "GUR", "IT",{"Malatya","44"}};
    cout << employee.name + "'s from " + employee.address.city << endl; 

    return 0;
}
```


Eğer substruct pointer ile çağırıldıysa bu kısımda önemli olan kısım kapsayıcı struct ile tüm değerlere ulaşılabilirken, sub struct değerlerinin harici olarak atanması gerekiyor. Anlamak için aşağıdaki örneği takip edebilirsiniz.

```
#include <iostream>

using namespace std;

struct Address
{
    string city;
    string code;
};

struct Staff
{
    uint8_t id;
    string name;
    string surname;
    string department;
    Address* address;
};

int main(int argc, char const *argv[])
{  
    Address newAddress = {"Malatya","44"};
    Staff employee = {123,"Berker", "GUR", "IT",&newAddress};
    Staff* employeeOfPointer = &employee;
    cout << employeeOfPointer->name + "'s from " + employeeOfPointer->address->city << endl; 

    return 0;
}
```





