#include <iostream>

#include "Hulk.h"

using namespace std;

Hulk::Hulk(){
    avenger = "Hulk";
    habilidad[0] = "Fuerza descomunal";
    habilidad[1] = "Resistencia descomunal";
    habilidad[2] = "Velocidad descomunal";
    habilidad[3] = "Regeneracion acelerado";
    habilidad[4] = "Supervivencia garantizada";
    habilidad[5] = "...";
}

Hulk::Hulk(string pNombre, int pEdad, char pSexo) : Humano(pNombre, pEdad, pSexo){
    avenger = "Hulk";
    habilidad[0] = "Fuerza descomunal";
    habilidad[1] = "Resistencia descomunal";
    habilidad[2] = "Velocidad descomunal";
    habilidad[3] = "Regeneracion acelerado";
    habilidad[4] = "Supervivencia garantizada";
    habilidad[5] = "...";
}

Hulk::~Hulk(){
    //dtor
}

string Hulk::getHabilidad(int i){
    return this -> habilidad[i];
}

string Hulk::getAvenger(){
    return this -> avenger;
}

void Hulk::imprimirHabilidades(){
    for (int i = 0; i < LIST; i++){
        cout << "\t" << i+1 << ". " << this -> habilidad[i] << endl;
    }
}
