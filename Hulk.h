#ifndef HULK_H
#define HULK_H

#include "Humano.h"

class Hulk : public Humano{
    public:
        Hulk();
        Hulk(string, int, char);
        virtual ~Hulk();
        string getHabilidad(int);
        string getAvenger();
        void imprimirHabilidades();

    protected:

    private:
        string habilidad[LIST];
        string avenger;
};

#endif // HULK_H
