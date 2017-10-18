#include <iostream>
#include "Tipos_y_Constantes.h"

void imprimirTitulo();
void compararObjetos();
void comparaPersonas(Persona& x,Persona& y);
void comparaComputadoras(Computadora& x,Computadora& y);

using namespace std;

int main()
{
    imprimirTitulo();
    compararObjetos();
    pausarTerminar();
    return 0;
}

void imprimirTitulo(){
    system(CLEAR);
    imprimirCentrado("Comparacion de Objetos","#");
    cout << endl;
}

void comparaPersonas(Persona& x,Persona& y){
    if (x.esIgualA(y)){
        cout << x.nombre << " es igual a " << y.nombre;
    }
    else{
        cout << x.nombre << " y " << y.nombre << " son diferentes";
    }
    cout << endl;
}

void comparaComputadoras(Computadora& x,Computadora& y){
    if (x.esIgualA(y)){
        cout << x.dameCadena() << " es igual a " <<
            y.dameCadena();
    }
    else{
        cout << x.dameCadena() << " y " << y.dameCadena() << " son diferentes";
    }
    cout << endl;
}

void comparaObjetos(Objeto& x,Objeto& y){
    if (x.esIgualA(y)){
        cout << x.dameCadena() << " es igual a " <<
            y.dameCadena();
    }
    else{
        cout << x.dameCadena() << " y " << y.dameCadena() << " son diferentes";
    }
    cout << endl;
}

void compararObjetos(){
    Persona luis;
    Persona alberto;
    Persona luisCasillas;
    Computadora laptop;
    Computadora desktop;
    luis.clave=2233517;
    luis.nombre="Luis";
    alberto.clave=2233517;
    alberto.nombre="Alberto";
    luisCasillas.clave=9512345;
    luisCasillas.nombre="Luis Casillas";
    laptop.marca="Toshiba";
    laptop.modelo="Alpha";
    desktop.marca="HP";
    desktop.modelo="Beta";
    comparaPersonas(luis,alberto);
    comparaPersonas(luis,luisCasillas);
    comparaComputadoras(laptop,desktop);
    comparaObjetos(luis,alberto);
    comparaObjetos(luis,luisCasillas);
    comparaObjetos(laptop,desktop);
    comparaObjetos(alberto,desktop);
}
