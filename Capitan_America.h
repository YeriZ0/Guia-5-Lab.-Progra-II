#ifndef CAPITAN_AMERICA_H
#define CAPITAN_AMERICA_H

#include "Humano.h"

class Capitan_America : public Humano{
    public:
        Capitan_America();
        Capitan_America(string, int, char);
        virtual ~Capitan_America();
        string getHabilidad(int);
        string getAvenger();
        void imprimirHabilidades();

    protected:

    private:
        string avenger;
        string habilidad[LIST];
};

#endif // CAPITAN_AMERICA_H
