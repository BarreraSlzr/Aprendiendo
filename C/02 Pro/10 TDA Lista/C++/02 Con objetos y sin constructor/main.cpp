#include <iostream>
#include "Operaciones_de_Listas.h"

void inicializaABC(Lista* l);
void imprimeListaInversa(Lista* l);
string intToString(int x);

using namespace std;

int main()
{
    Lista lis;
    Persona buscable,insertable,recuperado;
    posicion p;

    imprimirCentrado("TDA Lista con clases","#");
    pausar();
    cout << endl;
    inicializaABC(&lis);
    pausar();
    cout << "Imprimiendo lista:" << endl;
    lis.imprimeLista();
    pausar();
    insertable.clave=26;
    insertable.nombre="El insertado 26 al principio";
    cout << "Tratando de insertar..." << endl;
    lis.inserta(&insertable,lis.primero());
    pausar();
    buscable.clave=5;
    buscable.nombre="Uno con clave 5";
    cout << "Buscando elemento..." << endl;
    lis.imprimeElemento(&buscable);
    cout << endl;
    pausar();
    p=lis.localiza(&buscable);
    cout << "Localizado elemento en posicion p=" << p << "..." << endl;
    pausar();
    cout << "Imprimiendo lo que recibi de posicion" << endl;
    lis.imprimeElemento(lis.recupera(p));
    cout << endl;
    pausar();
    recuperado=*lis.recupera(p);
    cout << "El elemento recuperado es: ";
    lis.imprimeElemento(&recuperado);
    cout << endl;
    pausar();
    cout << "Suprimiendo elemento en posicion p=" << p << endl;
    lis.suprime(p);
    lis.imprimeLista();
    cout << "Insertando al principio de la lista..." << endl;
    lis.inserta(&insertable,lis.primero());
    pausar();
    cout << "Imprimiendo lista:" << endl;
    lis.imprimeLista();
    cout << "Elemento recuperado antes de suprimir de la lista: ";
    lis.imprimeElemento(&recuperado);
    cout << endl << "Eliminando ultimo elemento de la lista" << endl;
    lis.suprime(lis.anterior(lis.fin()));
    pausar();
    lis.imprimeLista();
    cout << "Insertando al final de la lista" << endl;
    insertable.clave=27;
    insertable.nombre="El insertado 27 al final";
    lis.inserta(&insertable,lis.fin());
    pausar();
    lis.imprimeLista();
    pausar();
    imprimeListaInversa(&lis);
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

    i=l->inicializa();//que pasa si comento esta linea...
    //i=l->primero();//y descomento esta
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
