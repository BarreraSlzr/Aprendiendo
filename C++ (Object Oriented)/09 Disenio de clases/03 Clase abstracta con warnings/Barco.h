#ifndef BARCO_H_INCLUDED
#define BARCO_H_INCLUDED

#include "Vehiculo.h"

using namespace std;

class Barco:public Vehiculo{
    int tipoPropulsores;
public:
    void calcularEficienciaGasolina(){
        cout << "Calculando eficiencia de barco" << endl;
    }
};

#endif // BARCO_H_INCLUDED
