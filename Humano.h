#ifndef HUMANO_H
#define HUMANO_H

#include <string>

#define LIST 6

using namespace std;

class Humano{
    public:
        Humano();
        Humano(string, int, char);
        virtual ~Humano();
        void comer();
        void dormir();
        void caminar();
        void correr();
        string quienSoy();

    protected:

    private:
        string nombre;
        int edad;
        char sexo;
};

#endif // HUMANO_H
