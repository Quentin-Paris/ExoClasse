#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "Test" << endl;

    srand(tim(NULL));
    Zombi z1;


    cout << "Zombi Luc" << endl;
    z1.setNom("Luc");
    z1.setPV(100);
    z1.setAttaque(10);
    z1.showInfos();
    cout << endl;

    cout << "Zombi Marc" << endl;
    Zombi z2 (z1)
    z2.setNom(Marc);
    z2.setPV(100);
    z2.setAttaque(10);
    z2.showInfos(0);

    cout << "Zombie Jean" << endl;
    Zombi z3 (150,20);
    z3.showInfos();


    cout << "Attaque de Luc :"  z1.getAttaque() << endl;
    cout << "PV de Marc :"  z2.getPV() << endl;

    cout << "Luc porte un coup a Marc" << endl;
    z1.attaqueZombi(&z2);





    return 0;
}
