#include <iostream>
#include "Operaciones_de_Listas.h"
#include "Tipos_y_Constantes.h"

#define MAX_ELEMENTOS_LISTA_ALPHA 10
#define MAX_ELEMENTOS_LISTA_BETA 10
#define MAX_ELEMENTOS_LISTA_GAMMA 10

template<class TipoElemento>
void inicializaABC(Lista<TipoElemento>& l);
template<class TipoElemento>
void imprimeListaInversa(Lista<TipoElemento>& l);
void usaListaPersonas();
void usaListaComputadoras();
void usaListaEnteros();
void imprimirTitulo();
void usaTodaLaLista();
void compararObjetos();

using namespace std;

int main()
{
    imprimirTitulo();
    usaListaPersonas();
    pausar();
    imprimirTitulo();
    usaListaComputadoras();
    pausar();
    imprimirTitulo();
    usaTodaLaLista();
    pausar();
    //usaListaEnteros();que pasa si descomentas esta?
    cout << "Ya termine de usar las listas" << endl;
    pausarTerminar();
    return 0;
}

void imprimirTitulo(){
    system(CLEAR);
    imprimirCentrado("TDA Lista con Templates","#");
    cout << endl;
}

void usaListaPersonas(){
    Lista<Persona> alpha,beta;
    Lista<Persona>* gamma;
    Persona insertable,buscable;
    posicion p;
    cout << "Listas de Personas" << endl;
    alpha.fijaNombre("Alpha");
    beta.fijaNombre("Beta");
    insertable.clave=1;
    insertable.nombre="Luis";
    alpha.inserta(insertable);
    insertable.clave=2;
    insertable.nombre="Alberto";
    alpha.inserta(insertable);
    alpha.imprimeLista();
    insertable.clave=3;
    insertable.nombre="Hugo";
    beta.inserta(insertable);
    insertable.clave=4;
    insertable.nombre="Paco";
    beta.inserta(insertable);
    beta.imprimeLista();
    cout << "Concatenando listas..." << endl;
    gamma=alpha.concatenar(beta);
    gamma->imprimeLista();
    cout << "Dime cual busco: " << endl;
    cout << "Clave: ";
    cin >> buscable.clave;
    if ((p=gamma->localiza(buscable))!=gamma->fin()){
        cout << gamma->recupera(p)->dameCadena() << endl;
    }
    else{
        cout << "No se encontro elemento";
    }
    cout << endl;
    pausar();
    delete gamma;
}

void usaListaComputadoras(){
    Lista<Computadora> alpha,beta;
    Lista<Computadora>* gamma;
    Computadora insertable,buscable;
    posicion p;
    cout << "Listas de Computadoras" << endl;
    alpha.fijaNombre("Alpha");
    beta.fijaNombre("Beta");
    insertable.marca="Toshiba";
    insertable.modelo="Alpha";
    alpha.inserta(insertable);
    insertable.marca="HP";
    insertable.modelo="Beta";
    alpha.inserta(insertable);
    alpha.imprimeLista();
    insertable.marca="IBM";
    insertable.modelo="Gamma";
    beta.inserta(insertable);
    insertable.marca="Apple";
    insertable.modelo="Delta";
    beta.inserta(insertable);
    beta.imprimeLista();
    cout << "Concatenando listas..." << endl;
    gamma=alpha.concatenar(beta);
    gamma->imprimeLista();
    cout << "Dime cual busco: " << endl;
    cout << "Marca: ";
    cin >> buscable.marca;
    cout << "Modelo: ";
    cin >> buscable.modelo;
    if ((p=gamma->localiza(buscable))!=gamma->fin()){
        cout << gamma->recupera(p)->dameCadena() << endl;
    }
    else{
        cout << "No se encontro elemento";
    }
    cout << endl;
    pausar();
    delete gamma;
}

/*void usaListaEnteros(){
    Lista<int> alpha,beta;
    Lista<int>* gamma;
    int insertable,buscable;
    posicion p;
    alpha.fijaNombre("Alpha");
    beta.fijaNombre("Beta");
    insertable=1;
    alpha.inserta(insertable);
    insertable=2;
    alpha.inserta(insertable);
    alpha.imprimeLista();
    insertable=3;
    beta.inserta(insertable);
    insertable=4;
    beta.inserta(insertable);
    beta.imprimeLista();
    cout << "Concatenando listas..." << endl;
    gamma=alpha.concatenar(beta);
    gamma->imprimeLista();
    cout << "Dime cual busco: ";
    cin >> buscable;
    if ((p=gamma->localiza(buscable))!=gamma->fin()){
        cout << *gamma->recupera(p) << endl;
    }
    else{
        cout << "No se encontro elemento";
    }
    cout << endl;
    delete gamma;
}*/

template<class TipoElemento>
void Lista<TipoElemento>::imprimeLista(){
    posicion p,q;
    int cuentaLineas=0;
    cout << "Lista " << dameNombre() << endl;
    for(p=primero(),q=fin();p!=q;p=siguiente(p)){
        //cout << *recupera(p) << endl;//para enteros
        cout << recupera(p)->dameCadena() << endl;//para objetos
        cuentaLineas++;
        if (cuentaLineas%MAX_LINEAS_POR_PAGINA==0){
            pausar();
        }
    }
}

template<class TipoElemento>
/*bool Lista<TipoElemento>::mismo(TipoElemento& x,TipoElemento& y){
    return x==y;//para comparar enteros
}*/
bool Lista<TipoElemento>::mismo(TipoElemento& x,TipoElemento& y){
    return x.esIgualA(y);//para comparar objetos
}

void usaTodaLaLista(){
    Lista<Persona> personas(MAX_ELEMENTOS_LISTA_ALPHA);
    inicializaABC(personas);
    imprimeListaInversa(personas);
}

template<class TipoElemento>
void inicializaABC(Lista<TipoElemento>& l){
    Persona x;
    posicion i;
    int valorClave=1;

    i=l.primero();
    while(!l.estaLlena()){
        cout << "Llenando con clave " << valorClave << endl;
        x.clave=valorClave++;
        x.nombre="El ";
        x.nombre+=intToString(x.clave);
        x.nombre+="o.";
        l.inserta(x,i);
        i=l.siguiente(i);
    }
}

template<class TipoElemento>
void imprimeListaInversa(Lista<TipoElemento>& l){
    posicion p,prim=l.primero();
    cout << "Imprimiendo lista inversa..." << endl;
    if (l.estaVacia()){
        cout << "La lista está vacia";
    }
    else{
        p=l.fin();
        do{
            p=l.anterior(p);
            cout << l.recupera(p)->dameCadena() << endl;
        }while(p!=prim);
    }
}
