#ifndef ADMINCIRCULOS_H_INCLUDED
#define ADMINCIRCULOS_H_INCLUDED

#include <sstream>
#include "Circulo.h"

#define MAX_CIRCULOS 2

class AdminCirculos{
    Circulo* circulos[MAX_CIRCULOS];
    int cuentaCirculos;
public:
    AdminCirculos(){
        cuentaCirculos=0;
        for(int i=0;i<MAX_CIRCULOS;i++){
            circulos[i]=NULL;
        }
    }
    bool agregar(Circulo* c){
        bool agrego;
        if (cuentaCirculos<MAX_CIRCULOS){
            circulos[cuentaCirculos++]=c;
            agrego=true;
        }
        else{
            agrego=false;
        }
        return agrego;
    }
    string dameInfoCirculo(int posicion){
        stringstream s;
        if (posicion>=1 && posicion<=cuentaCirculos){
            s << "Propiedades del Circulo c" << posicion << ":" << endl;
            s << circulos[posicion-1]->dameInfo();
        }
        else{
            s << "Posicion " << posicion << " fuera de rango" << endl;
        }
        return s.str();
    }
};

#endif // ADMINCIRCULOS_H_INCLUDED
