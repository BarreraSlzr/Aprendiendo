#include "Lista.h"

Lista::Lista(){//constructor
    cuentaNodos=0;
    encabezado=reservaNodo();
    encabezado->sig=NULL;
}

Lista::~Lista(){
    cout << "liberando lista " << dameNombre() << endl;
    while(!estaVacia()){
        suprime(primero());
    }
    cout << "liberando encabezado de " << dameNombre() << endl;
    liberaNodo(encabezado);
}

void Lista::inserta(TipoElemento x, posicion p){
    posicion temp=p->sig;
    p->sig=reservaNodo();
    p->sig->elemento=x;
    p->sig->sig=temp;
}

posicion Lista::localiza(TipoElemento x){
    posicion p;
    for(p=encabezado;p->sig!=NULL;p=p->sig){
        if (mismo(recupera(p),x))
            return p;
    }
    return p;//fin(l)
}

TipoElemento Lista::recupera(posicion p){
    posicion nodo=p->sig;
    if (nodo!=NULL){
        return (nodo->elemento);
    }
    else{
        imprimeError("Solicita recuperar de un nodo que no existe");
        return -1;
    }
}

void Lista::suprime(posicion p){
    posicion nodo=p->sig;
    if (nodo!=NULL){
        p->sig=nodo->sig;
        liberaNodo(nodo);
    }
    else{
        imprimeError("Solicita suprimir un nodo que no existe");
    }
}

posicion Lista::siguiente(posicion p){
    posicion nodo=p->sig;
    if (nodo==NULL)
        imprimeError("Posicion siguiente no existe");
    return nodo;
}

posicion Lista::anterior(posicion p){
    posicion ant;
    ant=encabezado;
    while(ant!=NULL && ant->sig!=p){
        ant=ant->sig;
    }
    if (ant==NULL)
        imprimeError("Posicion anterior no existe");
    return ant;
}

posicion Lista::primero(){
    if (!estaVacia())
        return encabezado;
    else return fin();//si vacia regresa encabezado
}

void Lista::imprimeLista(){
    posicion p,q;
    int cuentaLineas=0;
    for(p=primero(),q=fin();p!=q;p=siguiente(p)){
        imprimeElemento(recupera(p));
        cuentaLineas++;
        if (cuentaLineas%MAX_LINEAS_POR_PAGINA==0){
            pausar();
        }
    }
}

posicion Lista::fin(){
    posicion p=encabezado;
    while(p->sig!=NULL){
        p=p->sig;
    }
    return p;
}

bool Lista::estaVacia(){
    return encabezado->sig==NULL;
}

bool Lista::estaLlena(){
    return false;
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
    return cuentaNodos-1;
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

posicion Lista::reservaNodo(){
    cuentaNodos++;
    return new Nodo;
}

void Lista::liberaNodo(posicion p){
    cout << "liberando nodo de " << dameNombre() << endl;
    cuentaNodos--;
    delete p;
}

long Lista::dameCuentaNodos(){
    return cuentaNodos;
}

void Lista::fijaNombre(string n){
    nombre=n;
}

string Lista::dameNombre(){
    return nombre;
}
