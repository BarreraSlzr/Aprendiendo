#ifndef ADMINCIRCULOS_H_INCLUDED
#define ADMINCIRCULOS_H_INCLUDED

#include "Circulo.h"

class AdminCirculos{
//private:  //no es necesario pues private es por default
    Circulo* c1;
    Circulo* c2;
    int cuentaCirculos;
public:
    AdminCirculos(){
        cuentaCirculos=0;
        c1=NULL;
        c2=NULL;
    }
    bool agregar(Circulo* c){
        bool agrego;
        switch(cuentaCirculos){
        case 0:
            c1=c;
            agrego=true;
            cuentaCirculos++;
            break;
        case 1:
            c2=c;
            agrego=true;
            cuentaCirculos++;
            break;
        default:
            agrego=false;
        }
        return agrego;
    }
    void imprimeCirculo(int cual){
        switch(cual){
        case 1:
            cout << "\nPropiedades del Circulo c1:" << endl;
            c1->imprimeInfo();//delegacion
            break;
        case 2:
            cout << "\nPropiedades del Circulo c2:" << endl;
            c2->imprimeInfo();
            break;
        default:
            cout << "\nNumero " << cual << " fuera de rango" << endl;
        }
    }
};

#endif // ADMINCIRCULOS_H_INCLUDED
