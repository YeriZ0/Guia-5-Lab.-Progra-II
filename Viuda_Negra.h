#ifndef VIUDA_NEGRA_H
#define VIUDA_NEGRA_H

#include "Humano.h"

class Viuda_Negra : public Humano{
    public:
        Viuda_Negra();
        Viuda_Negra(string, int, char);
        virtual ~Viuda_Negra();
        string getHabilidad(int);
        string getAvenger();
        void imprimirHabilidades();

    protected:

    private:
        string habilidad[LIST];
        string avenger;
};

#endif // VIUDA_NEGRA_H
