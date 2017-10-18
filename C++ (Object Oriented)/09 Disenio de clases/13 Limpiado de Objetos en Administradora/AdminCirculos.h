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
    ~AdminCirculos(){//imprimo solo para ilustrar el destructor
        cout << "Eliminando AdminCirculos" << endl;
        for(int i=0;i<cuentaCirculos;i++){//que pasa si comento este bucle?
            delete circulos[i];
        }
    }
    bool agregar(double radio,int colorBorde,int colorFondo){
        bool agrego;
        if (cuentaCirculos<MAX_CIRCULOS){
            circulos[cuentaCirculos++]=new Circulo(radio,colorBorde,colorFondo);
            agrego=true;
        }
        else{
            agrego=false;
        }
        return agrego;
    }
    string dameInfoCirculo(int posicion){
        stringstream s;
        if (posicion>=0 && posicion<cuentaCirculos){
            s << "Propiedades del Circulo en posicion " << posicion << ":" << endl;
            s << circulos[posicion]->dameInfo();
        }
        else{
            s << "Posicion " << posicion << " fuera de rango" << endl;
        }
        return s.str();
    }
};

#endif // ADMINCIRCULOS_H_INCLUDED
