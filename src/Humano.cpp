#include <iostream>
#include "Humano.h"

using namespace std;

Humano::Humano(){
    //ctor
}

Humano::Humano(string Pnombre, int Pedad, char Psexo){
    nombre = Pnombre;
    edad = Pedad;
    sexo = Psexo;
}

Humano::~Humano(){
    //dtor
}

void Humano::caminar(){
    cout << "esta caminando." << endl;
}

void Humano::comer(){
    cout << "esta comiendo." << endl;
}

void Humano::correr(){
    cout << "esta corriendo." << endl;
}

void Humano::dormir(){
    cout << "esta durmiendo." << endl;
}

string Humano::quienSoy(){
    return this -> nombre;
}
