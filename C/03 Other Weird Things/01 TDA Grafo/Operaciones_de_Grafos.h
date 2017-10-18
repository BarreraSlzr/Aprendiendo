#ifndef OPERACIONES_DE_GRAFOS_H_INCLUDED
#define OPERACIONES_DE_GRAFOS_H_INCLUDED

#include <stdlib.h>
#include "Tipos_y_Constantes.h"

typedef struct{
    Arco* elementos;
    int numVertices;
}Grafo;

void inicializa(Grafo* g,int numVertices);
void libera(Grafo* g);
void insertaArco(Etiqueta x,Vertice v, Vertice w,Grafo* g);
void suprimeArco(Vertice v, Vertice w,Grafo* g);
Etiqueta etiquetaArco(Vertice v,Vertice w,Grafo* g);

void inicializa(Grafo* g,int numVertices){
    int i,j;
    g->elementos=(Arco*)malloc(numVertices*numVertices*sizeof(Arco));
    g->numVertices=numVertices;
    for(i=0;i<numVertices;i++){
        for(j=0;j<numVertices;j++){
            g->elementos[i*numVertices+j]=ARCO_NULO;//en objetos es asignar NULL
        }
    }
}

void insertaArco(Etiqueta x,Vertice v, Vertice w,Grafo* g){
    //en objetos es crear un objeto Arco que guarde una Etiqueta
    g->elementos[v*g->numVertices+w]=x;
}

void suprimeArco(Vertice v, Vertice w,Grafo* g){
    g->elementos[v*g->numVertices+w]=ARCO_NULO;
    //en objetos, eliminar el arco y posiblemente devolver la etiqueta y no void
}

Etiqueta etiquetaArco(Vertice v,Vertice w,Grafo* g){
    //en objetos, se le pide al arco su etiqueta
    return g->elementos[v*g->numVertices+w];
}

void libera(Grafo* g){
    free(g->elementos);
}

#endif // OPERACIONES_DE_COLAS_H_INCLUDED
