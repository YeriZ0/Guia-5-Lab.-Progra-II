#include <iostream>

#include "Viuda_Negra.h"

using namespace std;

Viuda_Negra::Viuda_Negra(){
    avenger = "Viuda Negra";
    habilidad[0] = "Inteligencia elevada";
    habilidad[1] = "Estrategia elevada";
    habilidad[2] = "Espionaje experto";
    habilidad[3] = "Combate experto";
    habilidad[4] = "Belleza nivel 90-60-90";
    habilidad[5] = "...";
}

Viuda_Negra::Viuda_Negra(string pNombre, int pEdad, char pSexo) : Humano(pNombre, pEdad, pSexo){
    avenger = "Viuda Negra";
    habilidad[0] = "Inteligencia elevada";
    habilidad[1] = "Estrategia elevada";
    habilidad[2] = "Espionaje experto";
    habilidad[3] = "Combate experto";
    habilidad[4] = "Belleza nivel 90-60-90";
    habilidad[5] = "...";
}

Viuda_Negra::~Viuda_Negra()
{
    //dtor
}

string Viuda_Negra::getHabilidad(int i){
    return this -> habilidad[i];
}

string Viuda_Negra::getAvenger(){
    return this -> avenger;
}

void Viuda_Negra::imprimirHabilidades(){
    for (int i = 0; i < LIST; i++){
        cout << "\t" << i+1 << ". " << this -> habilidad[i] << endl;
    }
}
