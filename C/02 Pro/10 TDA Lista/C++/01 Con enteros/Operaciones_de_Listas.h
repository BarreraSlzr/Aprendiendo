#ifndef OPERACIONES_DE_LISTAS_H_INCLUDED
#define OPERACIONES_DE_LISTAS_H_INCLUDED
#include <iostream>
#include "Tipos_y_Constantes.h"
#include "util.h"

typedef int posicion;
const posicion POSICION_ERROR=-1;

class Lista{
    TipoElemento elementos[MAX_ELEMENTOS];
    posicion ult;
    string nombre;
public:
    Lista();
    void inserta(TipoElemento x, posicion p);
    posicion localiza(TipoElemento x);
    TipoElemento recupera(posicion p);
    void suprime(posicion p);
    posicion siguiente(posicion p);
    posicion anterior(posicion p);
    posicion primero();
    void imprimeLista();
    posicion fin();
    bool estaVacia();
    bool estaLlena();
    void imprimeElemento(TipoElemento x);
    void imprimeError(string info);
    bool mismo(TipoElemento x,TipoElemento y);
    void inserta(TipoElemento x);
    posicion ultimo();
    int longitud();
    Lista* concatenar(Lista* l);
    void fijaNombre(string n);
    string dameNombre();
};

Lista::Lista(){//constructor
    ult=-1;
}

void Lista::inserta(TipoElemento x, posicion p){
    posicion q;
    if (estaLlena()){
        imprimeError("La lista esta llena");
    }
    else if ((p<primero()) || (p>fin())){
        imprimeError("La posicion a insertar no existe");
    }
    else{
        for(q=ult;q>=p;q--){
            elementos[q+1]=elementos[q];
        }
        ult++;
        elementos[p]=x;
    }
}

posicion Lista::localiza(TipoElemento x){
    posicion p,q;
    for(p=primero(),q=ult;p<=q;p++){
        if (mismo(recupera(p),x))
            return p;
    }
    return p;//fin()
}

TipoElemento Lista::recupera(posicion p){
    if (p>=primero() && p<=ult){
        return (elementos[p]);
    }
    return -1;//es correcto esto?
}

void Lista::suprime(posicion p){
    posicion q,r;
    if ((p<primero()) || (p>ult)){
        imprimeError("La posicion a suprimir no existe");
    }
    else{
        r=--(ult);
        for(q=p;q<=r;q++){
            elementos[q]=elementos[q+1];
        }
    }
}

posicion Lista::siguiente(posicion p){
    if (p>=primero() && p<=ult)
        return p+1;
    imprimeError("Posicion siguiente no existe");
    return POSICION_ERROR;
}

posicion Lista::anterior(posicion p){
    if (p>primero() && p<=fin())
        return p-1;
    imprimeError("Posicion anterior no existe");
    return POSICION_ERROR;
}

posicion Lista::primero(){
    if (!estaVacia())
        return 0;
    else return fin();
    /*podria haber escrito tan solo return 0,
      pues si la lista esta vacia fin() devuelve 0
      sin embargo habria un warning de compilacion
    */
}

posicion Lista::fin(){
    cout << "llamando a fin()" << endl;
    return ult+1;
}

bool Lista::estaVacia(){
    return ult<0;
}

bool Lista::estaLlena(){
    return ult>=MAX_ELEMENTOS-1;
}

void Lista::imprimeError(string info){
    cout << "ERROR DEL PROGRAMADOR: " << info << endl;
}

void Lista::inserta(TipoElemento x){
    inserta(x,fin());
}

posicion Lista::ultimo(){
    if (estaVacia()){
        return POSICION_ERROR;
    }
    else{
        return anterior(fin());
    }
}

int Lista::longitud(){
    return ult+1;
}

Lista* Lista::concatenar(Lista* l){
    Lista* m=new Lista;
    posicion p=primero(),q=fin();
    while(!m->estaLlena() && p!=q){
        m->inserta(recupera(p));
        p=siguiente(p);
    }
    p=l->primero();
    q=l->fin();
    while(!m->estaLlena() && p!=q){
        m->inserta(l->recupera(p));
        p=l->siguiente(p);
    }
    return m;
}

void Lista::fijaNombre(string n){
    nombre=n;
}

string Lista::dameNombre(){
    return nombre;
}

#endif // OPERACIONES_DE_LISTAS_H_INCLUDED
