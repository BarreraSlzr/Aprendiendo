#include <iostream>

//#include "Vehiculo.h"
#include "Automovil.h"
#include "Avion.h"
#include "Barco.h"

using namespace std;

int main(){
    //Vehiculo* x=new Vehiculo();//no compila por ser clase abstracta
    Automovil* bmw=new Automovil();
    Avion* f14=new Avion();
    Barco* titanic=new Barco();

    bmw->calcularEficienciaGasolina();
    f14->calcularEficienciaGasolina();
    titanic->calcularEficienciaGasolina();
    delete bmw;
    delete f14;
    delete titanic;
}
