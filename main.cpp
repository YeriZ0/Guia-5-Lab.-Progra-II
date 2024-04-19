#include <iostream>

#include "Iron_Man.h"
#include "Capitan_America.h"
#include "Viuda_Negra.h"
#include "Hulk.h"
#include "Thor.h"

using namespace std;

//Fredy Alexander Campos Figueroa - Lab de Progra II

char menu(){

    char opcion;

    cout << " ********** INICIATIVA AVENGERS ********** \n" << endl;
    cout << "Seleccione un super heroe: \n" << endl;
    cout << "\t1. Iron Man" << endl;
    cout << "\t2. Capitan America" << endl;
    cout << "\t3. Viuda Negra" << endl;
    cout << "\t4. Hulk" << endl;
    cout << "\t5. Thor" << endl;
    cout << "\t6. Cerrar iniciativa Avengers \n" << endl;
    cout << " -> "; cin >> opcion;

    return opcion;
}

char manejarPersona(string avenger){

    char seleccion;
    cout << "\nSeleccione una accion para " << avenger << ": \n" << endl;
    cout << "\t1. Realizar una accion" << endl;
    cout << "\t2. Utilizar superpoder" << endl;
    cout << "\t3. Cambiar de Avenger \n" << endl;
    cout << " -> "; cin >> seleccion;

    return seleccion;
}

void IronManControl(Iron_Man IronMan, char accion, string personaje){

    char op;
    int ac;

    switch(accion){
        case '1':
            cout << "\n" << personaje << " puede: \n" << endl;
            cout << "\t1. Comer" << endl;
            cout << "\t2. Caminar" << endl;
            cout << "\t3. Correr" << endl;
            cout << "\t4. Dormir" << endl;
            cout << "\t5. Revelar identidad ' quien soy ' \n" << endl;
            cout << " -> "; cin >> op;

            if(op == '1'){
                cout << endl;
                cout << personaje << " ";
                IronMan.comer();
            }else if(op == '2'){
                cout << endl;
                cout << personaje << " ";
                IronMan.caminar();
            }else if(op == '3'){
                cout << endl;
                cout << personaje << " ";
                IronMan.correr();
            }else if(op == '4'){
                cout << endl;
                cout << personaje << " ";
                IronMan.dormir();
            }else if(op == '5'){
                cout << "\n " << personaje << " en realidad soy " << IronMan.quienSoy() << ". \n" << endl;
            }

            cout << endl;
            break;
        case '2':
            cout << "\nEste personaje tiene los siguientes poderes: \n" << endl;
            IronMan.imprimirHabilidades();
            cout << "\n -> "; cin >> ac;

            ac -= 1;
            if(ac >= 0 && ac < LIST)
            cout << "\n" << personaje << " utiliza '" << IronMan.getHabilidad(ac) << "' . \n" << endl;
            break;
        case '3':

            break;
        default:
            cout << "\nError, seleccione una opcion existente. " << endl;
            break;
    }
}

void CapAmericaControl(Capitan_America CapAmerica, char accion, string personaje){

    char op;
    int ac;

    switch(accion){
        case '1':
            cout << "\n" << personaje << " puede: \n" << endl;
            cout << "\t1. Comer" << endl;
            cout << "\t2. Caminar" << endl;
            cout << "\t3. Correr" << endl;
            cout << "\t4. Dormir" << endl;
            cout << "\t5. Revelar identidad ' quien soy '\n" << endl;
            cout << " -> "; cin >> op;

            if(op == '1'){
                cout << endl;
                cout << personaje << " ";
                CapAmerica.comer();
            }else if(op == '2'){
                cout << endl;
                cout << personaje << " ";
                CapAmerica.caminar();
            }else if(op == '3'){
                cout << endl;
                cout << personaje << " ";
                CapAmerica.correr();
            }else if(op == '4'){
                cout << endl;
                cout << personaje << " ";
                CapAmerica.dormir();
            }else if(op == '5'){
                cout << "\n " << personaje << " en realidad soy " << CapAmerica.quienSoy() << ". \n" << endl;
            }

            cout << endl;
            break;
        case '2':
            cout << "\nEste personaje tiene los siguientes poderes: \n" << endl;
            CapAmerica.imprimirHabilidades();
            cout << "\n -> "; cin >> ac;

            ac -= 1;
            if(ac >= 0 && ac < LIST)
            cout << "\n" << personaje << " utiliza '" << CapAmerica.getHabilidad(ac) << "' . \n" << endl;
            break;
        case '3':

            break;
        default:
            cout << "\nError, seleccione una opcion existente. " << endl;
            break;
    }
}

void ViudaNegraControl(Viuda_Negra ViuNegra, char accion, string personaje){

    char op;
    int ac;

    switch(accion){
        case '1':
            cout << "\n" << personaje << " puede: \n" << endl;
            cout << "\t1. Comer" << endl;
            cout << "\t2. Caminar" << endl;
            cout << "\t3. Correr" << endl;
            cout << "\t4. Dormir" << endl;
            cout << "\t5. Revelar identidad ' quien soy '\n" << endl;
            cout << " -> "; cin >> op;

            if(op == '1'){
                cout << endl;
                cout << personaje << " ";
                ViuNegra.comer();
            }else if(op == '2'){
                cout << endl;
                cout << personaje << " ";
                ViuNegra.caminar();
            }else if(op == '3'){
                cout << endl;
                cout << personaje << " ";
                ViuNegra.correr();
            }else if(op == '4'){
                cout << endl;
                cout << personaje << " ";
                ViuNegra.dormir();
            }else if(op == '5'){
                cout << "\n " << personaje << " en realidad soy " << ViuNegra.quienSoy() << ". \n" << endl;
            }

            cout << endl;
            break;
        case '2':
            cout << "\nEste personaje tiene los siguientes poderes: \n" << endl;
            ViuNegra.imprimirHabilidades();
            cout << "\n -> "; cin >> ac;

            ac -= 1;
            if(ac >= 0 && ac < LIST)
            cout << "\n" << personaje << " utiliza '" << ViuNegra.getHabilidad(ac) << "' . \n" << endl;
            break;
        case '3':

            break;
        default:
            cout << "\nError, seleccione una opcion existente. " << endl;
            break;
    }
}

void HulkControl(Hulk Hulk_, char accion, string personaje){

    char op;
    int ac;

    switch(accion){
        case '1':
            cout << "\n" << personaje << " puede: \n" << endl;
            cout << "\t1. Comer" << endl;
            cout << "\t2. Caminar" << endl;
            cout << "\t3. Correr" << endl;
            cout << "\t4. Dormir" << endl;
            cout << "\t5. Revelar identidad ' quien soy '\n" << endl;
            cout << " -> "; cin >> op;

            if(op == '1'){
                cout << endl;
                cout << personaje << " ";
                Hulk_.comer();
            }else if(op == '2'){
                cout << endl;
                cout << personaje << " ";
                Hulk_.caminar();
            }else if(op == '3'){
                cout << endl;
                cout << personaje << " ";
                Hulk_.correr();
            }else if(op == '4'){
                cout << endl;
                cout << personaje << " ";
                Hulk_.dormir();
            }else if(op == '5'){
                cout << "\n " << personaje << " en realidad soy " << Hulk_.quienSoy() << ". \n" << endl;
            }

            cout << endl;
            break;
        case '2':
            cout << "\nEste personaje tiene los siguientes poderes: \n" << endl;
            Hulk_.imprimirHabilidades();
            cout << "\n -> "; cin >> ac;

            ac -= 1;
            if(ac >= 0 && ac < LIST)
            cout << "\n" << personaje << " utiliza '" << Hulk_.getHabilidad(ac) << "' . \n" << endl;
            break;
        case '3':

            break;
        default:
            cout << "\nError, seleccione una opcion existente. " << endl;
            break;
    }
}

void ThorControl(Thor Thor_, char accion, string personaje){

    char op;
    int ac;

    switch(accion){
        case '1':
            cout << "\n" << personaje << " puede: \n" << endl;
            cout << "\t1. Comer" << endl;
            cout << "\t2. Caminar" << endl;
            cout << "\t3. Correr" << endl;
            cout << "\t4. Dormir" << endl;
            cout << "\t5. Revelar identidad ' quien soy '\n" << endl;
            cout << " -> "; cin >> op;

            if(op == '1'){
                cout << endl;
                cout << personaje << " ";
                Thor_.comer();
            }else if(op == '2'){
                cout << endl;
                cout << personaje << " ";
                Thor_.caminar();
            }else if(op == '3'){
                cout << endl;
                cout << personaje << " ";
                Thor_.correr();
            }else if(op == '4'){
                cout << endl;
                cout << personaje << " ";
                Thor_.dormir();
            }else if(op == '5'){
                cout << "\n " << personaje << " en realidad soy " << Thor_.quienSoy() << ". \n" << endl;
            }

            cout << endl;
            break;
        case '2':
            cout << "\nEste personaje tiene los siguientes poderes: \n" << endl;
            Thor_.imprimirHabilidades();
            cout << "\n -> "; cin >> ac;

            ac -= 1;
            if(ac >= 0 && ac < LIST)
            cout << "\n" << personaje << " utiliza '" << Thor_.getHabilidad(ac) << "' . \n" << endl;
            break;
        case '3':

            break;
        default:
            cout << "\nError, seleccione una opcion existente. " << endl;
            break;
    }
}

int main(){

    char menuOp1, menuOp2;
    Iron_Man per1("Tony Stark", 53, 'M');
    Capitan_America per2("Steven Rogers", 27, 'M');
    Viuda_Negra per3("Natasha Romanova", 38, 'F');
    Hulk per4("Robert Bruce Banner", 56, 'M');
    Thor per5("Thor Odinson", 24, 'M');



    do{
        system("cls");
        menuOp1 = menu();
        switch(menuOp1){
        case '1':
            do{
                system("cls");
                menuOp2 = manejarPersona("Iron Man");
                IronManControl(per1, menuOp2, per1.getAvenger());
                system("pause");
            }while(menuOp2 != '3');
            break;
        case '2':
            do{
                system("cls");
                menuOp2 = manejarPersona("Capitan America");
                CapAmericaControl(per2, menuOp2, per2.getAvenger());
                system("pause");
            }while(menuOp2 != '3');
            break;
        case '3':
            do{
                system("cls");
                menuOp2 = manejarPersona("Viuda Negra");
                ViudaNegraControl(per3, menuOp2, per3.getAvenger());
                system("pause");
            }while(menuOp2 != '3');
            break;
        case '4':
            do{
                system("cls");
                menuOp2 = manejarPersona("Hulk");
                HulkControl(per4, menuOp2, per4.getAvenger());
                system("pause");
            }while(menuOp2 != '3');
            break;
        case '5':
            do{
                system("cls");
                menuOp2 = manejarPersona("Thor");
                ThorControl(per5, menuOp2, per5.getAvenger());
                system("pause");
            }while(menuOp2 != '3');
            break;
        default:
            cout << "Error, seleccione una opcion valida. " << endl;
        }

    }while(menuOp1 != '6');

    return 0;
}
