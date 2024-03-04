#include <iostream>

using namespace std;

//---------------------------------------Call Func--------------------------------------------//
void getSize(int *size);
void setInput(int *ptr,int *size);
void getOutput(int *ptr,int *size);
//---------------------------------------MAIN-------------------------------------------------//
int main(int argc, char const *argv[])
{
    int *values  = new int;
    int *size    = new int;

    getSize(size);
    setInput(values,size);
    getOutput(values,size);

    delete [] values;
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
