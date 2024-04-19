#include <iostream>

#include "Iron_Man.h"

using namespace std;

Iron_Man::Iron_Man(){
    avenger = "Iron Man";
    habilidad[0] = "Genio natural";
    habilidad[1] = "Armadura Mark 50";
    habilidad[2] = "Volar";
    habilidad[3] = "Disparar rayos";
    habilidad[4] = "Disparar metralla";
    habilidad[5] = "Disparar proyectil";
}

Iron_Man::Iron_Man(string pNombre, int pEdad, char pSexo) : Humano(pNombre, pEdad, pSexo){
    avenger = "Iron Man";
    habilidad[0] = "Genio natural";
    habilidad[1] = "Armadura Mark 50";
    habilidad[2] = "Volar";
    habilidad[3] = "Disparar rayos";
    habilidad[4] = "Disparar metralla";
    habilidad[5] = "Disparar proyectil";
}

Iron_Man::~Iron_Man(){
    //dtor
}

string Iron_Man::getHabilidad(int i){
    return this -> habilidad[i];
}

string Iron_Man::getAvenger(){
    return this -> avenger;
}

void Iron_Man::imprimirHabilidades(){
    for (int i = 0; i < LIST; i++){
        cout << "\t" << i+1 << ". " << this -> habilidad[i] << endl;
    }
}
