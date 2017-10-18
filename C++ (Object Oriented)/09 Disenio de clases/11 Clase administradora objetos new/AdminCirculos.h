#ifndef ADMINCIRCULOS_H_INCLUDED
#define ADMINCIRCULOS_H_INCLUDED

#include "Circulo.h"

class AdminCirculos{
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
    void imprimeCirculo(int cual){//sigue inapropiado que AdminCirculos pida cout
        switch(cual){
        case 1:
            cout << "Propiedades del Circulo c1:" << endl;
            cout << c1->dameInfo() << endl;//inapropiado casar el administrador con la interfaz
            break;
        case 2:
            cout << "Propiedades del Circulo c2:" << endl;
            cout << c2->dameInfo() << endl;
            break;
        default:
            cout << "Numero " << cual << " fuera de rango" << endl;
        }
    }
};

#endif // ADMINCIRCULOS_H_INCLUDED
