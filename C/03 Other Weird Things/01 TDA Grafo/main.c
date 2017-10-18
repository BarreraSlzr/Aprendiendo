#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Operaciones_de_Grafos.h"
#include "Operaciones_de_Listas.h"

#define NUM_VERTICES 5

void dijkstra(Grafo* grafo);

int main()
{
    Grafo grafo;
    inicializa(&grafo,NUM_VERTICES);
    printf("Insertando arcos en el grafo...\n");
    insertaArco(10,0,1,&grafo);
    insertaArco(30,0,3,&grafo);
    insertaArco(100,0,4,&grafo);
    insertaArco(50,1,2,&grafo);
    insertaArco(10,2,4,&grafo);
    insertaArco(20,3,2,&grafo);
    insertaArco(60,3,4,&grafo);
    printf("Ejecutando algoritmo de Dijkstra...\n");
    dijkstra(&grafo);
    return 0;
}

void imprime(TipoElemento* x){
    printf("%d",*x);
}

booleano mismo(TipoElemento* x,TipoElemento* y){
    return *x==*y;
}

Vertice encuentraVerticeMinimo(Lista verticesFaltantes,Etiqueta distancias[]){
    Vertice verticeMinimo,verticePosible;
    Etiqueta distanciaMinima,distanciaPosible;
    posicion i,j;
    i=primero(verticesFaltantes);
    j=fin(verticesFaltantes);
    verticeMinimo=*recupera(i);
    distanciaMinima=distancias[verticeMinimo];
    for(i=siguiente(i);i!=j;i=siguiente(i)){
        verticePosible=*recupera(i);
        distanciaPosible=distancias[verticePosible];
        if ((distanciaMinima==ARCO_NULO) ||
            (distanciaPosible!=ARCO_NULO && distanciaPosible<distanciaMinima)){
            distanciaMinima=distanciaPosible;
            verticeMinimo=verticePosible;
        }
        //else seguir buscando
    }
    return verticeMinimo;
}

Arco encuentraDistanciaMinima(Vertice v,Vertice w,Arco distancias[],
                              Grafo* grafo,Vertice rutaCorta[]){
    Arco dist1,dist2;
    if ((dist1=distancias[w])!=ARCO_NULO){
        dist2=etiquetaArco(w,v,grafo);
        if (dist2==ARCO_NULO){
            dist1=ARCO_NULO;  //distancia combinada es infinita
        }
        else{
            dist1+=dist2;
        }
    }
    if ((dist2=distancias[v])!=ARCO_NULO){
        if (dist1==ARCO_NULO || dist2<dist1){
            dist1=dist2;
        }
        else{
            rutaCorta[v]=w;
        }
    }
    return dist1;
}

void imprimeDistancias(Lista verticesVerificados,Vertice verticeInspeccionado,
                       Arco distancias[]){
    posicion p,q;
    int i=0;
    printf("\t\t{");
    for(p=primero(verticesVerificados),q=anterior(fin(verticesVerificados),
                                verticesVerificados);p!=q;p=siguiente(p)){
        printf("%d,",(*recupera(p))+1);
        i++;
    }
    printf("%d}",(*recupera(p))+1);
    for(;i<NUM_VERTICES;i++){
        printf("  ");
    }
    if (verticeInspeccionado==VERTICE_NULO){
        printf("\t-");
    }
    else printf("\t%d",verticeInspeccionado+1);
    for(i=1;i<NUM_VERTICES;i++){
        if (distancias[i]==ARCO_NULO){
            printf("\tinf");
        }
        else{
            printf("\t%d",distancias[i]);
        }
    }
    printf("\n");
}

void imprimeRutaCorta(Vertice ruta[]){
    Lista camino;
    int i,j;
    posicion p;

    printf("Ruta mas corta hacia...\n");
    anula(&camino);
    for(i=1;i<NUM_VERTICES;i++){
        printf("%d: ",i+1);
        for(j=i;j>0;){
            inserta(&(ruta[j]),primero(camino));
            j=ruta[j];
        }
        while(!estaVacia(camino)){
            p=primero(camino);
            printf("%d,",(*recupera(p))+1);
            suprime(p);
        }
        printf("%d\n",i+1);
    }
}

void dijkstra(Grafo* grafo){
    Lista verticesPorVerificar,verticesVerificados;
    Vertice verticeInspeccionado,v;
    Vertice rutaCorta[NUM_VERTICES];
    Etiqueta distancias[NUM_VERTICES];
    posicion p,q;
    int i;

    anula(&verticesPorVerificar);
    anula(&verticesVerificados);
    verticeInspeccionado=0;
    inserta(&verticeInspeccionado,fin(verticesVerificados));
    for(i=1;i<NUM_VERTICES;i++){
        v=i;
        distancias[i]=etiquetaArco(verticeInspeccionado,v,grafo);
        inserta(&v,fin(verticesPorVerificar));
        rutaCorta[i]=verticeInspeccionado;
    }
    printf("Iteracion\tS\t\tw");
    for(i=2;i<=NUM_VERTICES;i++){
        printf("\tD[%d]",i);
    }
    printf("\ninicial");
    verticeInspeccionado=VERTICE_NULO;
    imprimeDistancias(verticesVerificados,verticeInspeccionado,distancias);
    for(i=1;i<NUM_VERTICES;i++){
        verticeInspeccionado=encuentraVerticeMinimo(verticesPorVerificar,distancias);
        inserta(&verticeInspeccionado,fin(verticesVerificados));
        suprime(localiza(&verticeInspeccionado,verticesPorVerificar));
        for(p=primero(verticesPorVerificar),q=fin(verticesPorVerificar);p!=q;p=siguiente(p)){
            v=*recupera(p);
            distancias[v]=encuentraDistanciaMinima(v,verticeInspeccionado,distancias,grafo,rutaCorta);
        }
        printf("%d",i);
        imprimeDistancias(verticesVerificados,verticeInspeccionado,distancias);
    }
    imprimeRutaCorta(rutaCorta);
}
