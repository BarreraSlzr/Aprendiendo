#include <iostream>
#include "Operaciones_de_Listas.h"
#include "Tipos_y_Constantes.h"

#define MAX_PERSONAS 25

template<class TipoElemento>
void inicializarPurga(Lista<TipoElemento>& l);

using namespace std;

int main()
{
    Lista<Persona> lis(MAX_PERSONAS);
    Persona insertable;

    lis.fijaNombre("Elementos repetidos");
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
    insertable.clave=8;
    insertable.nombre="El insertado 8";
    cout << "Tratando de insertar..." << endl;
    lis.inserta(insertable,lis.fin());
    pausar();
    cout << "Imprimendo lista:" << endl;
    lis.imprimeLista();
    pausarTerminar();
    return 0;
}

template<class TipoElemento>
bool Lista<TipoElemento>::mismo(TipoElemento& x,TipoElemento& y){
    return x.esIgualA(y);
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
    Persona x;
    posicion i;
    int llave,cuentaLlave;

    i=l.primero();
    llave=1;
    cuentaLlave=0;
    while(!l.estaLlena()){
        cout << "Llenando con clave " << llave << endl;
        x.clave=llave;
        x.nombre="El ";
        x.nombre+=intToString(x.clave);
        x.nombre+="o.";
        l.inserta(x,i);
        i=l.siguiente(i);
        cuentaLlave++;
        if (cuentaLlave==llave){
            llave++;
            cuentaLlave=0;
        }
    }
}
