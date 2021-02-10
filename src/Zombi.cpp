#include "Zombi.h"

Zombi::Zombi()
{
    nom = "default";
    pv = 100;
    attaque = 10;
    cout << "Je suis Zombi" << getNom() << endl;
}

Zombi::Zombi(int p,int a)
{
    pv = p;
    attaque = a;
]

Zombi::Zombi(string n)
{
    nom = n;
]

Zombi::~Zombi()
{
    cout << "Un Zombi est detruit, c'est" << getNom() << endl;
}

void Zombi::setPV(int p)
{
    if (p > 100 || p < 0){
        cerr << "pv du Zombi compromis" << endl;
        p=0;
    }
    else{
        pv = p;
    }
}

string Zombi::getNom() const
{
    return nom;
}

int Zombi::getAttaque() const
{
    return attaque;
}

void Zombi::setAttaque(int a)
{
   if (a > 10 || a < 0){
        cerr << "Attaque du Zombi compromis" << endl;
        a=0;
    }
    else{
        attaque = a;
    }
}

void Zombi::showInfos() const
{
    cout << "nom : " << getNom() << endl;
    cout << "pv : " << getPV() << endl;
    cout << "attaque : " << getAttaque() << endl;
}

void Zombi::attaqueZombi(Zombi* cible)
{
    cible -> setPV(cible -> getPV() - getAttaque)
}
