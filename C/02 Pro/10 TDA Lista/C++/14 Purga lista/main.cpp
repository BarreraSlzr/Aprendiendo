#include <iostream>
#include "Operaciones_de_Listas.h"
#include "Tipos_y_Constantes.h"

#define MAX_ELEMENTOS_LISTA 25

template<class TipoElemento>
void inicializarPurga(Lista<TipoElemento>& l);

using namespace std;

void pruebaPurga();

int main()
{
    cout << "Cuenta objetos es " << cuentaObjetos << endl;
    pausar();
    pruebaPurga();
    cout << "Cuenta objetos es " << cuentaObjetos << endl;//debe salir cero
    pausarTerminar();
    return 0;
}

void pruebaPurga(){
    Lista<Persona> lis;
    Persona* nuevo;
    lis.fijaNombre("Elementos repetidos");
    lis.fijaEliminaElementos(true);
    inicializarPurga(lis);
    cout << "Imprimendo lista:" << endl;
    lis.imprimeLista();
    pausar();
    cout << "Purgando lista..." << endl;
    lis.purga();
    pausar();
    lis.fijaNombre("Elementos sin repetir");
    cout << "Imprimendo lista:" << endl;
    lis.imprimeLista();
    pausar();
    nuevo=new Persona(8,"El nuevo 8");
    cout << "Tratando de insertar..." << endl;
    lis.inserta(nuevo,lis.fin());
    pausar();
    cout << "Imprimendo lista:" << endl;
    lis.imprimeLista();
    pausar();
    delete nuevo;//¿que pasa si la lista no se llena y si se inserto nuevo?
    pausar();
}

template<class TipoElemento>
bool Lista<TipoElemento>::mismo(TipoElemento* x,TipoElemento* y){
    return x->esIgualA(y);
}

template<class TipoElemento>
void Lista<TipoElemento>::imprimeLista(){
    posicion p,q;
    int cuentaLineas=0;
    cout << "Lista " << dameNombre() << endl;
    for(p=primero(),q=fin();p!=q;p=siguiente(p)){
        cout << recupera(p)->dameCadena() << endl;
        cuentaLineas++;
        if (cuentaLineas%MAX_LINEAS_POR_PAGINA==0){
            pausar();
        }
    }
}

template<class TipoElemento>
void inicializarPurga(Lista<TipoElemento>& l){
    Persona* x;
    posicion i;
    int valorClave,cuentaClave,cuenta=0;

    i=l.primero();
    valorClave=1;
    cuentaClave=0;
    for(i=l.primero();cuenta<MAX_ELEMENTOS_LISTA;cuenta++){
        cout << "Llenando con clave " << valorClave << endl;
        x=new Persona(valorClave,"El ");
        x->nombre+=intToString(x->clave);
        x->nombre+="o.";
        l.inserta(x,i);
        i=l.siguiente(i);
        cuentaClave++;
        if (cuentaClave==valorClave){
            valorClave++;
            cuentaClave=0;
        }
    }
}
