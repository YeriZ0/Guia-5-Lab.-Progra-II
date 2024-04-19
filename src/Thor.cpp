#include <iostream>

#include "Thor.h"

using namespace std;

Thor::Thor(){
    avenger = "Thor";
    habilidad[0] = "Genio natural";
    habilidad[1] = "Armadura Mark 50";
    habilidad[2] = "Volar";
    habilidad[3] = "Disparar rayos";
    habilidad[4] = "Disparar metralla";
    habilidad[5] = "Dispbarar proyectil";
}

Thor::Thor(string pNombre, int pEdad, char pSexo) : Humano(pNombre, pEdad, pSexo){
    avenger = "Thor";
    habilidad[0] = "Genio natural";
    habilidad[1] = "Armadura Mark 50";
    habilidad[2] = "Volar";
    habilidad[3] = "Disparar rayos";
    habilidad[4] = "Disparar metralla";
    habilidad[5] = "Dispbarar proyectil";
}

Thor::~Thor()
{
    //dtor
}

string Thor::getHabilidad(int i){
    return this -> habilidad[i];
}

string Thor::getAvenger(){
    return this -> avenger;
}

void Thor::imprimirHabilidades(){
    for (int i = 0; i < LIST; i++){
        cout << "\t" << i+1 << ". " << this -> habilidad[i] << endl;
    }
}
