#ifndef OPERACIONES_DE_LISTAS_H_INCLUDED
#define OPERACIONES_DE_LISTAS_H_INCLUDED

#include <iostream>

typedef int posicion;
const posicion POSICION_ERROR=-1;

using namespace std;

template<class TipoElemento>
class Lista{
    TipoElemento* elementos;
    posicion ult;
    string nombre;
    int capacidad;
public:
    Lista(int capacidad);
    ~Lista();
    void inserta(TipoElemento& x, posicion p);
    void inserta(TipoElemento& x);
    posicion localiza(TipoElemento& x);
    TipoElemento* recupera(posicion p);
    void suprime(posicion p);
    posicion siguiente(posicion p);
    posicion anterior(posicion p);
    posicion primero();
    void imprimeLista();
    posicion fin();
    posicion ultimo();
    bool estaVacia();
    bool estaLlena();
    //void imprimeElemento(TipoElemento* x);
    void imprimeError(string info);
    bool mismo(TipoElemento& x,TipoElemento& y);
    int dameLongitud();
    int dameCapacidad();
    Lista concatenar(Lista& l);
    void fijaNombre(string n);
    string dameNombre();
    void purga();
};

template<class TipoElemento>
Lista<TipoElemento>::Lista(int capacidad){//constructor
    ult=-1;
    nombre="Sin Nombre";
    elementos=new TipoElemento[this->capacidad=capacidad];
}

template<class TipoElemento>
void Lista<TipoElemento>::fijaNombre(string n){
    nombre=n;
}

template<class TipoElemento>
string Lista<TipoElemento>::dameNombre(){
    return nombre;
}

template<class TipoElemento>
Lista<TipoElemento>::~Lista(){//destructor
    cout << "Eliminando Lista " << dameNombre() << endl;
    //delete[] elementos;que pasa si descomentas esta?
}

template<class TipoElemento>
void Lista<TipoElemento>::inserta(TipoElemento& x, posicion p){
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

template<class TipoElemento>
void Lista<TipoElemento>::inserta(TipoElemento& x){
    inserta(x,fin());
}

template<class TipoElemento>
posicion Lista<TipoElemento>::localiza(TipoElemento& x){
    posicion p,q;
    for(p=primero(),q=ult;p<=q;p++){
        if (mismo(*recupera(p),x))
            return p;
    }
    return p;//fin()
}

template<class TipoElemento>
TipoElemento* Lista<TipoElemento>::recupera(posicion p){
    if (p>=primero() && p<=ult){
        return &(elementos[p]);
    }
    return NULL;
}

template<class TipoElemento>
void Lista<TipoElemento>::suprime(posicion p){
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

template<class TipoElemento>
posicion Lista<TipoElemento>::siguiente(posicion p){
    if (p>=primero() && p<=ult)
        return p+1;
    imprimeError("Posicion siguiente no existe");
    return POSICION_ERROR;
}

template<class TipoElemento>
posicion Lista<TipoElemento>::anterior(posicion p){
    if (p>primero() && p<=fin())
        return p-1;
    imprimeError("Posicion anterior no existe");
    return POSICION_ERROR;
}

template<class TipoElemento>
posicion Lista<TipoElemento>::primero(){
    if (!estaVacia())
        return 0;
    else return fin();
    /*podria haber escrito tan solo return 0,
      pues si la lista esta vacia fin() devuelve 0
      sin embargo habria un warning de compilacion
    */
}

template<class TipoElemento>
posicion Lista<TipoElemento>::fin(){
    return ult+1;
}

template<class TipoElemento>
posicion Lista<TipoElemento>::ultimo(){
    if (estaVacia()){
        return POSICION_ERROR;
    }
    else{
        return anterior(fin());
    }
}

template<class TipoElemento>
bool Lista<TipoElemento>::estaVacia(){
    return ult<0;
}

template<class TipoElemento>
bool Lista<TipoElemento>::estaLlena(){
    return ult>=capacidad-1;
}

template<class TipoElemento>
void Lista<TipoElemento>::imprimeError(string info){
    cout << "ERROR DEL PROGRAMADOR: " << info << endl;
}

template<class TipoElemento>
int Lista<TipoElemento>::dameLongitud(){
    return ult+1;
}

template<class TipoElemento>
int Lista<TipoElemento>::dameCapacidad(){
    return capacidad;
}

template<class TipoElemento>
Lista<TipoElemento> Lista<TipoElemento>::concatenar(Lista& l){
    Lista<TipoElemento> m(l.dameCapacidad());
    posicion p=primero(),q=fin();
    while(!m.estaLlena() && p!=q){
        m.inserta(*recupera(p));
        p=siguiente(p);
    }
    p=l.primero();
    q=l.fin();
    while(!m.estaLlena() && p!=q){
        m.inserta(*l.recupera(p));
        p=l.siguiente(p);
    }
    return m;
}

template<class TipoElemento>
void Lista<TipoElemento>::purga(){
    posicion p,q;
    //tarea a implementar
}
#endif // OPERACIONES_DE_LISTAS_H_INCLUDED
