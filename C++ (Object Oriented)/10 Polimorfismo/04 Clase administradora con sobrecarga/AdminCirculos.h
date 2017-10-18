#ifndef ADMINCIRCULOS_H_INCLUDED
#define ADMINCIRCULOS_H_INCLUDED

#include "Circulo.h"

#define MAX_CIRCULOS 3

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
    ~AdminCirculos(){
        cout << "Eliminando AdminCirculos" << endl;
        for(int i=0;i<MAX_CIRCULOS;i++){
            if (circulos[i]!=NULL){
                delete circulos[i];
            }
        }
    }
    //cuestionable este metodo, dependiendo de como se use
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
    //metodo sobrecargado pero que no reutiliza codigo de otro metodo sobrecargado
    bool agregar(double radio,int colorBorde,int colorFondo){
        bool agrego;
        if (cuentaCirculos<MAX_CIRCULOS){//parece repetir codigo
            circulos[cuentaCirculos++]=new Circulo(radio,colorBorde,colorFondo);
            agrego=true;
        }
        else{
            agrego=false;
        }
        return agrego;
    }
    //si se necesita el metodo agregar(Circulo* c) entonces asi se reutiliza codigo
    /*bool agregar(double radio,int colorBorde,int colorFondo){//metodo sobrecargado
        Circulo* c=new Circulo(radio,colorBorde,colorFondo);
        bool agrego;
        if (!(agrego=agregar(c))){//delegacion
            delete c;
        }
        return agrego;
    }*/
    /*bool agregar(double radio,int colorBorde,int colorFondo){
        if (cuentaCirculos<MAX_CIRCULOS){
            agregar(new Circulo(radio,colorBorde,colorFondo));
            return true;
        }
        else{
            return false;
        }
    }*/
    /*bool agregar(double radio,int colorBorde,int colorFondo){
        return cuentaCirculos<MAX_CIRCULOS && agregar(new Circulo(radio,colorBorde,colorFondo));
    }*/
    /*bool agregar(double radio,int colorBorde,int colorFondo){//factible en Java pero no en C++
        //Java hace el delete automatico si no agrego
        return agregar(new Circulo(radio,colorBorde,colorFondo));
    }*/
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
