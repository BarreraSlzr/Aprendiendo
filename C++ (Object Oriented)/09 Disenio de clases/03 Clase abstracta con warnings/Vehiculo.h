#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED

using namespace std;

class Vehiculo{
    string marca;
    string modelo;
    string tipoMotor;
    int numPuertas;
    int numVentanas;
public:
    virtual void calcularEficienciaGasolina()=0;//metodo puro
    bool fijaTipoMotor(string m){
        tipoMotor=m;
        return true;
    }
    string dameTipoMotor(){
        return marca;
    }
};

#endif // VEHICULO_H_INCLUDED
