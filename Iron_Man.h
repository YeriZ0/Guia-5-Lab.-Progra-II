#ifndef IRON_MAN_H
#define IRON_MAN_H

#include "Humano.h"

class Iron_Man : public Humano{
    public:
        Iron_Man();
        Iron_Man(string, int, char);
        virtual ~Iron_Man();
        string getHabilidad(int);
        string getAvenger();
        void imprimirHabilidades();

    protected:

    private:
        string habilidad[LIST];
        string avenger;

};

#endif // IRON_MAN_H
