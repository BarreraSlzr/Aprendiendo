#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operaciones_de_Listas_doblemente_ligadas.h"

void inicializaABC(Lista* l);
void liberaLista(Lista l);
void imprimeListaInversa(Lista l);

int main()
{
    Lista lis;
    Persona buscable,insertable,recuperado;
    posicion p;

    printf("Nodos reservados %ld\n",dameCuentaNodos());
    inicializaABC(&lis);
    pausar();
    printf("Imprimiendo lista:\n");
    imprimeLista(lis);
    pausar();
    insertable.clave=26;
    strcpy(insertable.nombre,"El insertado 26 al principio");
    buscable.clave=5;
    strcpy(buscable.nombre,"Uno con clave 5");
    printf("Buscando elemento...");
    imprimeElemento(&buscable);
    p=localiza(&buscable,lis);
    recuperado=*recupera(p);
    printf("\nEliminando elemento en posicion p=%ld...\n",(long)p);
    suprime(p);
    printf("Insertando al principio de la lista...\n");
    inserta(&insertable,lis);  //ya no es como antes "inserta(&insertable,primero(lis));"
    pausar();
    printf("Imprimiendo lista:\n");
    imprimeLista(lis);
    printf("Elemento recuperado antes de suprimir de la lista: ");
    imprimeElemento(&recuperado);
    printf("\nEliminando ultimo elemento de la lista\n");
    suprime(fin(lis));  //ya no es como antes "suprime(anterior(fin(lis)))"
    pausar();
    imprimeLista(lis);
    printf("Insertando al final de la lista\n");
    insertable.clave=27;
    strcpy(insertable.nombre,"El insertado 27 al final");
    inserta(&insertable,fin(lis));
    pausar();
    imprimeLista(lis);
    pausar();
    imprimeListaInversa(lis);
    printf("\nNodos reservados incluyendo encabezado %ld\n",dameCuentaNodos());
    liberaLista(lis);
    printf("Nodos reservados incluyendo encabezado %ld\n",dameCuentaNodos());
    liberaNodo(lis);
    printf("Nodos reservados liberando encabezado %ld\n",dameCuentaNodos());
    return 0;
}

void liberaLista(Lista l){
    printf("Liberando lista...\n");
    while(!estaVacia(l)){
        suprime(primero(l));
    }
}

void imprimeElemento(TipoElemento* x){
    printf("Clave=%d, Nombre=%s",x->clave,x->nombre);
}

booleano mismo(TipoElemento* x,TipoElemento* y){
    return x->clave==y->clave;
}

void inicializaABC(Lista* l){
    Persona x;
    char nombre[TAMANO_NOMBRE];
    posicion i;
    int valorClave=1;

    i=inicializa(l);
    while(valorClave<=25){
        printf("Llenando con clave %d\n",valorClave);
        x.clave=valorClave++;
        strcpy(x.nombre,"El ");
        strcat(x.nombre,itoa(x.clave, nombre, 10));
        strcat(x.nombre,"o.");
        inserta(&x,i);
        i=siguiente(i);
    }
}

void imprimeListaInversa(Lista l){
    posicion p;
    printf("Imprimiendo lista inversa...\n");
    if (estaVacia(l)){
        printf("La lista está vacia");
    }
    else{
        p=fin(l);
        while(p!=l){
            imprimeElemento(recupera(p));
            printf("\n");
            p=anterior(p);
        }
        /*
        ya no es como antes
        do{
            p=anterior(p);
            imprimeElemento(recupera(p));
            printf("\n");
        }while(p!=prim);
        */
    }
}
