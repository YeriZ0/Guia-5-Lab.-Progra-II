#ifndef THOR_H
#define THOR_H

#include "Humano.h"

class Thor : public Humano{
    public:
        Thor();
        Thor(string, int, char);
        virtual ~Thor();
        string getHabilidad(int);
        string getAvenger();
        void imprimirHabilidades();

    protected:

    private:
        string habilidad[LIST];
        string avenger;
};

#endif // THOR_H
