#include <iostream>

using namespace std;

class Gamer
{

public:
    static int gamers;
    Gamer()
    {
        gamers++;
        cout<<gamers<<". oyuncu olusturuldu."<<endl;
    }
};
int Gamer::gamers = 0;

int main(int argc, char const *argv[])
{
    Gamer gamer1;
    Gamer gamer2;
    Gamer gamer3;
    Gamer gamer4;
    return 0;
}
