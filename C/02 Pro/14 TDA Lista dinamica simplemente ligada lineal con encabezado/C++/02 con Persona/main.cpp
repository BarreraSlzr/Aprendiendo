#include <iostream>
#include "Operaciones_de_Listas.h"
#include "util.h"

void inicializaABC(Lista* l);
void imprimeListaInversa(Lista* l);
string intToString(int x);

using namespace std;

int main()
{
    Lista alpha,beta,*gamma;
    Persona insertable;
    alpha.fijaNombre("Alpha");
    beta.fijaNombre("Beta");
    imprimirCentrado("TDA Lista mas mas apuntadores","#");
    pausar();
    cout << endl;
    insertable.clave=1;
    insertable.nombre="uno";
    alpha.inserta(&insertable);
    insertable.clave=2;
    insertable.nombre="dos";
    alpha.inserta(&insertable);
    cout << "Imprimiendo lista alpha..." << endl;
    alpha.imprimeLista();
    pausar();
    cout << "imprimiendo primer elemento..." << endl;
    alpha.imprimeElemento(alpha.recupera(alpha.primero()));
    cout << endl << "imprimiendo ultimo elemento..." << endl;
    alpha.imprimeElemento(alpha.recupera(alpha.ultimo()));
    cout << endl << "Longitud de lista es: " << alpha.longitud() << endl;
    pausar();
    insertable.clave=3;
    insertable.nombre="tres";
    beta.inserta(&insertable);
    insertable.clave=4;
    insertable.nombre="cuatro";
    beta.inserta(&insertable);
    cout << "Imprimiendo lista beta..." << endl;
    beta.imprimeLista();
    pausar();

    cout << "Concatenando listas..." << endl;
    gamma=alpha.concatenar(&beta);
    cout << endl << "Longitud de lista es: " << gamma->longitud() << endl;
    gamma->fijaNombre("Gamma");
    gamma->imprimeLista();
    pausar();

    cout << endl << "Nodos reservados " << alpha.dameNombre() <<
        " mas encabezado " << alpha.dameCuentaNodos() << endl;
    cout << endl << "Nodos reservados " << beta.dameNombre() <<
        " mas encabezado " << beta.dameCuentaNodos() << endl;
    cout << endl << "Nodos reservados " << gamma->dameNombre() <<
        " mas encabezado " << gamma->dameCuentaNodos() << endl;
    delete gamma;
    return 0;
}

void Lista::imprimeElemento(TipoElemento* x){
    cout << "Clave=" << x->clave << ", Nombre=" << x->nombre;
}

bool Lista::mismo(TipoElemento* x,TipoElemento* y){
    return x->clave==y->clave;
}

string intToString(int x){
    string s="";
    int previousX=x;
    if (x<0){
        x*=-1;
    }
    do{
        switch(x%10){
        case 0:
            s="0"+s;
            break;
        case 1:
            s="1"+s;
            break;
        case 2:
            s="2"+s;
            break;
        case 3:
            s="3"+s;
            break;
        case 4:
            s="4"+s;
            break;
        case 5:
            s="5"+s;
            break;
        case 6:
            s="6"+s;
            break;
        case 7:
            s="7"+s;
            break;
        case 8:
            s="8"+s;
            break;
        default:
            s="9"+s;
            break;
        }
        x/=10;
    }while(x>0);
    if (previousX<0){
        s="-"+s;
    }
    return s;
}

void inicializaABC(Lista* l){
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

void imprimeListaInversa(Lista* l){
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
