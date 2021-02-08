#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "Test" << endl;

    srand(tim(NULL));
    Zombi z1;

    z1.setNom("Luc");
    z1.setPV(100);
    z1.setAttaque(10);
    z1.showInfos();
    cout << endl;


    return 0;
}
