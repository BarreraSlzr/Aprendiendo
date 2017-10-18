#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operaciones_de_Listas.h"

void inicializaABC(Lista* l);
void imprimeListaInversa(Lista l);

int main()
{
    Lista lis;
    Persona buscable,insertable,recuperado;
    posicion p;

    inicializaEspacio();//adicional requerido para cursores
    inicializaABC(&lis);
    pausar();
    printf("Imprimiendo lista:\n");
    imprimeLista(lis);
    pausar();
    insertable.clave=26;
    strcpy(insertable.nombre,"El insertado 26 al principio");
    printf("Tratando de insertar...\n");
    inserta(&insertable,primero(lis),&lis);
    buscable.clave=5;
    strcpy(buscable.nombre,"Uno con clave 5");
    printf("Buscando elemento...");
    imprimeElemento(&buscable);
    p=localiza(&buscable,lis);
    recuperado=*recupera(p,lis);
    printf("\nEliminando elemento en posicion p=%d...\n",p);
    suprime(p,&lis);
    printf("Insertando al principio de la lista...\n");
    inserta(&insertable,primero(lis),&lis);
    pausar();
    printf("Imprimiendo lista:\n");
    imprimeLista(lis);
    printf("Elemento recuperado antes de suprimir de la lista: ");
    imprimeElemento(&recuperado);
    printf("\nEliminando ultimo elemento de la lista\n");
    suprime(anterior(fin(lis),lis),&lis);
    pausar();
    imprimeLista(lis);
    printf("Insertando al final de la lista\n");
    insertable.clave=27;
    strcpy(insertable.nombre,"El insertado 27 al final");
    inserta(&insertable,fin(lis),&lis);
    pausar();
    imprimeLista(lis);
    pausar();
    imprimeListaInversa(lis);
    return 0;
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
    while(!estaLlena()){
        printf("Llenando con clave %d\n",valorClave);
        x.clave=valorClave++;
        strcpy(x.nombre,"El ");
        strcat(x.nombre,itoa(x.clave, nombre, 10));
        strcat(x.nombre,"o.");
        inserta(&x,i,l);
        i=siguiente(i,*l);
    }
}

void imprimeListaInversa(Lista l){
    posicion p,prim=primero(l);
    printf("Imprimiendo lista inversa...\n");
    if (estaVacia(l)){
        printf("La lista está vacia");
    }
    else{
        p=fin(l);
        do{
            p=anterior(p,l);
            imprimeElemento(recupera(p,l));
            printf("\n");
        }while(p!=prim);
    }
}
