#ifndef ZOMBIBOMBER_H
#define ZOMBIBOMBER_H

#include "Zombi.h"


class ZombiBomber : public Zombi
{
    private:
        int attaque = 20;


    public:
        void explose() const;

        void attaqueZombi(Zombi* cible);


    protected:

};

#endif // ZOMBIBOMBER_H
