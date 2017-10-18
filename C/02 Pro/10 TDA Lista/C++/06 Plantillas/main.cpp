#include <iostream>
#include "Operaciones_de_Listas.h"
#include "Tipos_y_Constantes.h"

template<class TipoElemento>
void inicializaABC(Lista<TipoElemento>* l);
template<class TipoElemento>
void imprimeListaInversa(Lista<TipoElemento>* l);
void usaListaPersonas();
void usaListaComputadoras();
void usaListaEnteros();

using namespace std;

int main()
{
    imprimirCentrado("TDA Lista con Templates","#");
    cout << endl;
    //usaListaPersonas();
    //usaListaComputadoras();
    usaListaEnteros();
    cout << "Ya termine de usar las listas" << endl;
    pausar();
    return 0;
}

/*void usaListaPersonas(){
    Lista<Persona> alpha,beta,gamma;
    Persona insertable;
    alpha.fijaNombre("Alpha");
    beta.fijaNombre("Beta");
    insertable.clave=2233517;
    insertable.nombre="Luis";
    alpha.inserta(&insertable);
    insertable.clave=2233518;
    insertable.nombre="Alberto";
    alpha.inserta(&insertable);
    alpha.imprimeLista();
    insertable.clave=3;
    insertable.nombre="Hugo";
    beta.inserta(&insertable);
    insertable.clave=4;
    insertable.nombre="Paco";
    beta.inserta(&insertable);
    beta.imprimeLista();
    cout << "Concatenando listas..." << endl;
    gamma=alpha.concatenar(&beta);
    gamma.imprimeLista();
}*/

/*void usaListaComputadoras(){
    Lista<Computadora> alpha,beta,gamma;
    Computadora insertable,buscable;
    posicion p;
    alpha.fijaNombre("Alpha");
    beta.fijaNombre("Beta");
    insertable.marca="Toshiba";
    insertable.modelo="Alpha";
    alpha.inserta(&insertable);
    insertable.marca="HP";
    insertable.modelo="Beta";
    alpha.inserta(&insertable);
    alpha.imprimeLista();
    insertable.marca="IBM";
    insertable.modelo="Gamma";
    beta.inserta(&insertable);
    insertable.marca="Apple";
    insertable.modelo="Delta";
    beta.inserta(&insertable);
    beta.imprimeLista();
    cout << "Concatenando listas..." << endl;
    gamma=alpha.concatenar(&beta);
    gamma.imprimeLista();
    cout << "Dime cual busco: " << endl;
    cout << "Marca: ";
    cin >> buscable.marca;
    cout << "Modelo: ";
    cin >> buscable.modelo;
    if ((p=gamma.localiza(&buscable))!=gamma.fin()){
        gamma.imprimeElemento(gamma.recupera(p));
    }
    else{
        cout << "No se encontro elemento";
    }
    cout << endl;
}*/

void usaListaEnteros(){
    Lista<int> alpha,beta,gamma;
    int insertable,buscable;
    posicion p;
    alpha.fijaNombre("Alpha");
    beta.fijaNombre("Beta");
    insertable=1;
    alpha.inserta(&insertable);
    insertable=2;
    alpha.inserta(&insertable);
    alpha.imprimeLista();
    insertable=3;
    beta.inserta(&insertable);
    insertable=4;
    beta.inserta(&insertable);
    beta.imprimeLista();
    cout << "Concatenando listas..." << endl;
    gamma=alpha.concatenar(&beta);
    gamma.imprimeLista();
    cout << "Dime cual busco: ";
    cin >> buscable;
    if ((p=gamma.localiza(&buscable))!=gamma.fin()){
        gamma.imprimeElemento(gamma.recupera(p));
    }
    else{
        cout << "No se encontro elemento";
    }
    cout << endl;
}

template<class TipoElemento>
/*void Lista<TipoElemento>::imprimeElemento(TipoElemento* x){
    cout << "Clave=" << x->clave << ", Nombre=" << x->nombre;
}*/
/*void Lista<TipoElemento>::imprimeElemento(TipoElemento* x){
    cout << "Marca=" << x->marca << ", Modelo=" << x->modelo;
}*/
void Lista<TipoElemento>::imprimeElemento(TipoElemento* x){
    cout << *x;
}

template<class TipoElemento>
/*bool Lista<TipoElemento>::mismo(TipoElemento* x,TipoElemento* y){
    return x->clave==y->clave;
}*/
/*bool Lista<TipoElemento>::mismo(TipoElemento* x,TipoElemento* y){
    return x->marca==y->marca && x->modelo==y->modelo;
}*/
bool Lista<TipoElemento>::mismo(TipoElemento* x,TipoElemento* y){
    return *x==*y;
}

template<class TipoElemento>
void inicializaABC(Lista<TipoElemento>* l){
    Persona x;
    posicion i;
    int valorClave=1;

    i=l->primero();
    while(!l->estaLlena()){
        cout << "Llenando con clave " << valorClave << endl;
        x.clave=valorClave++;
        x.nombre="El ";
        x.nombre+=intToString(x.clave);
        x.nombre+="o.";
        l->inserta(&x,i);
        i=l->siguiente(i);
    }
}

template<class TipoElemento>
void imprimeListaInversa(Lista<TipoElemento>* l){
    posicion p,prim=l->primero();
    cout << "Imprimiendo lista inversa..." << endl;
    if (l->estaVacia()){
        cout << "La lista está vacia";
    }
    else{
        p=l->fin();
        do{
            p=l->anterior(p);
            l->imprimeElemento(l->recupera(p));
            cout << endl;
        }while(p!=prim);
    }
}
