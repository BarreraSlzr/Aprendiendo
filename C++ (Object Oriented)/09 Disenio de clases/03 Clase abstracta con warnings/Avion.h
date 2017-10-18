#ifndef AVION_H_INCLUDED
#define AVION_H_INCLUDED

#include "Vehiculo.h"

using namespace std;

class Avion:public Vehiculo{
    int tipoAlas;
public:
    void calcularEficienciaGasolina(){
        cout << "Calculando eficiencia de avion" << endl;
    }
};

#endif // AVION_H_INCLUDED
