#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operaciones_de_Listas.h"

void inicializaPorValor(Lista l);

int main()
{
    Lista lis;
    Persona x;

    printf("Prueba de paso de parametros por valor.\n");
    x.clave=100;
    strcpy(x.nombre,"Luis");
    lis.elementos[0]=x;
    printf("Elementos[0] al inicio:\n");
    printf("clave=%d\n",lis.elementos[0].clave);
    printf("nombre=%s\n",lis.elementos[0].nombre);
    inicializaPorValor(lis);
    printf("Fuera de inicializaPorValor():\n");
    printf("clave=%d\n",lis.elementos[0].clave);
    printf("nombre=%s\n",lis.elementos[0].nombre);
    return 0;
}

void imprimeElemento(TipoElemento* x){
    printf("Clave=%d, Nombre=%s",x->clave,x->nombre);
}

booleano mismo(TipoElemento* x,TipoElemento* y){
    return x->clave==y->clave;
}

void inicializaPorValor(Lista l){
    l.elementos[0].clave=200;
    strcpy(l.elementos[0].nombre,"Alberto");
    printf("Dentro de inicializaPorValor():\n");
    printf("clave=%d\n",l.elementos[0].clave);
    printf("nombre=%s\n",l.elementos[0].nombre);
}
