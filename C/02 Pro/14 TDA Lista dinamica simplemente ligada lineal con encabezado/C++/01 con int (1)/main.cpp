#include <iostream>
#include "Operaciones_de_Listas.h"

void inicializaABC(Lista* l);
void imprimeListaInversa(Lista* l);

using namespace std;

int main()
{
    Lista listaCompras;//le caben 12 elementos
    TipoElemento x,y;
    posicion p;

    imprimirCentrado("TDA Lista con apuntadores","#");
    pausar();
    listaCompras.fijaNombre("Lista del super");
    //insertar 10 elementos, aqui ya no hay indices
    inicializaABC(&listaCompras);
    listaCompras.imprimeLista();
    pausar();
    x=20;
    p=listaCompras.fin();
    listaCompras.inserta(x,p);//inserto en p=10, supongo sí inserto
    listaCompras.imprimeLista();
    pausar();

    p=listaCompras.localiza(x);//p==10
    y=listaCompras.recupera(p);//y==20, x==y
    cout << "y=" << y << endl;
    pausar();
    //listaCompras.suprime(0);//jamás parámetro número mágico

    x=7;
    p=listaCompras.localiza(x);//p==4
    listaCompras.suprime(p);//aguas, suponemos que si está x
    listaCompras.imprimeLista();
    pausar();

    p=listaCompras.primero();//p==0
    listaCompras.inserta(11,p);
    listaCompras.imprimeLista();
    pausar();

    //listaCompras.inserta(11,listaCompras.primero());

    p=listaCompras.localiza(3);//p==2
    x=18;
    listaCompras.inserta(x,p);
    listaCompras.imprimeLista();
    pausar();
    x=19;
    //p=listaCompras.fin();
    //listaCompras.inserta(x,p);//si inserto sin verificar espacio

    //suponiendo que no ocurrieran los 2 anteriores
    if (!listaCompras.estaLlena())
    {
        p=listaCompras.fin();
        listaCompras.inserta(x,p);
        cout << "Si se pudo insertar x=" << x << endl;
        listaCompras.imprimeLista();
    }
    else
    {
        cout << "La lista de compras esta llena" << endl;
    }
    pausar();

    x=10;
    p=listaCompras.localiza(x);
    if (p!=listaCompras.fin()) //si existe ese p
    {
        listaCompras.suprime(p);
    }
    else
    {
        cout << "No se encuentra x=" << x << endl;
    }
    pausar();

    x=10;
    p=listaCompras.localiza(x);
    if (p!=listaCompras.fin()) //si existe ese p
    {
        y=listaCompras.recupera(p);
        cout << "y=" << y << endl;
    }
    else
    {
        cout << "No se encuentra x=" << x << endl;
    }
    pausar();

    //imprimir lista
    p=listaCompras.primero();//p==0
    while(p!=listaCompras.fin())
    {
        x=listaCompras.recupera(p);
        cout << x << endl;
        p=listaCompras.siguiente(p);
    }
    pausar();
    imprimeListaInversa(&listaCompras);
    pausar();
    return 0;
}

void Lista::imprimeElemento(TipoElemento x)
{
    cout << x;
}

bool Lista::mismo(TipoElemento x,TipoElemento y)
{
    return x==y;
}

void inicializaABC(Lista* l)
{
    l->inserta(2,l->fin());
    l->inserta(3,l->fin());
    l->inserta(5,l->fin());
    l->inserta(8,l->fin());
    l->inserta(7,l->fin());
    l->inserta(9,l->fin());
    l->inserta(12,l->fin());
    l->inserta(15,l->fin());
    l->inserta(14,l->fin());
    l->inserta(25,l->fin());
}

void imprimeListaInversa(Lista* l)
{
    posicion p,prim=l->primero();
    cout << "Imprimiendo lista inversa..." << endl;
    if (l->estaVacia())
    {
        cout << "La lista está vacia";
    }
    else
    {
        p=l->fin();
        do
        {
            p=l->anterior(p);
            l->imprimeElemento(l->recupera(p));
            cout << endl;
        }
        while(p!=prim);
    }
}
