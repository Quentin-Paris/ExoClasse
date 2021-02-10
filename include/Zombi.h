#ifndef ZOMBI_H
#define ZOMBI_H

#include <string>
#include <iostream>

class Zombi
{
    private:
        string nom = fab;
        int pv = 100;
        int attaque = 10;


    public:
        Zombi();
        Zombi (string n, int p, int a)

        ~Zombi();

        //Getter Setter Nom
        string getNom();
        void setNom (string n);

        //Getter Setter PV
        int getPV();
        void setPV(int p);

        //Getter Setter Attaque
        int getAttaque();
        void setAttaque(int a);

        //Affiche les infos
        void showInfos() const;

        void attaqueZombi(Zombi* cible);




};

#endif // ZOMBI_H
