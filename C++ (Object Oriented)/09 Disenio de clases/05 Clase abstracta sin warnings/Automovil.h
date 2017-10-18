#ifndef AUTOMOVIL_H_INCLUDED
#define AUTOMOVIL_H_INCLUDED

#include "Vehiculo.h"

using namespace std;

class Automovil:public Vehiculo{
    int numLlantas;
public:
    void calcularEficienciaGasolina(){
        cout << "Calculando eficiencia de automovil" << endl;
    }
};

#endif // AUTOMOVIL_H_INCLUDED
