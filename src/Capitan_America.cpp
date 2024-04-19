#include <iostream>

#include "Capitan_America.h"

using namespace std;

Capitan_America::Capitan_America(){
    avenger = "Capitan America";
    habilidad[0] = "Estrategia aumentada";
    habilidad[1] = "Fuerza aumentada";
    habilidad[2] = "Velocidad aumentada";
    habilidad[3] = "Resistencia aumentada";
    habilidad[4] = "Combate nivel maestro";
    habilidad[5] = "...";
}

Capitan_America::Capitan_America(string pNombre, int pEdad, char pSexo) : Humano(pNombre, pEdad, pSexo){
    avenger = "Capitan America";
    habilidad[0] = "Estrategia aumentada";
    habilidad[1] = "Fuerza aumentada";
    habilidad[2] = "Velocidad aumentada";
    habilidad[3] = "Resistencia aumentada";
    habilidad[4] = "Combate nivel maestro";
    habilidad[5] = "...";
}

Capitan_America::~Capitan_America()
{
    //dtor
}

string Capitan_America::getHabilidad(int i){
    return this -> habilidad[i];
}

string Capitan_America::getAvenger(){
    return this -> avenger;
}

void Capitan_America::imprimirHabilidades(){
    for (int i = 0; i < LIST; i++){
        cout << "\t" << i+1 << ". " << this -> habilidad[i] << endl;
    }
}
