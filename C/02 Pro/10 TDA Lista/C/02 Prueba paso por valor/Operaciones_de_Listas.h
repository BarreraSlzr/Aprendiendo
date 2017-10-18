#ifndef OPERACIONES_DE_LISTAS_H_INCLUDED
#define OPERACIONES_DE_LISTAS_H_INCLUDED

#include "Tipos_y_Constantes.h"
#include "util.h"

typedef int posicion;
typedef struct{
    TipoElemento elementos[MAX_ELEMENTOS];
    posicion ult;
}Lista;

const posicion POSICION_ERROR=-1;

void inserta(TipoElemento* x, posicion p, Lista* l);
posicion localiza(TipoElemento* x, Lista* l);
TipoElemento* recupera(posicion p,Lista* l);
void suprime(posicion p,Lista* l);
posicion siguiente(posicion p,Lista* l);
posicion anterior(posicion p, Lista* l);
posicion inicializa(Lista* l);
posicion primero(Lista* l);
void imprimeLista(Lista* l);
posicion fin(Lista* l);
booleano estaVacia(Lista* l);
booleano estaLlena(Lista* l);
void imprimeElemento(TipoElemento* x);
void imprimeError(char* info);
booleano mismo(TipoElemento* x,TipoElemento* y);

void inserta(TipoElemento* x, posicion p, Lista* l){
    posicion q;
    if (estaLlena(l)){
        imprimeError("La lista esta llena");
    }
    else if ((p<primero(l)) || (p>fin(l))){
        imprimeError("La posicion a insertar no existe");
    }
    else{
        for(q=l->ult;q>=p;q--){
            l->elementos[q+1]=l->elementos[q];
        }
        l->ult++;
        l->elementos[p]=*x;
    }
}

posicion localiza(TipoElemento* x, Lista* l){
    posicion p,q;
    for(p=primero(l),q=l->ult;p<=q;p++){
        if (mismo(recupera(p,l),x))
            return p;
    }
    return p;//fin(l)
}

TipoElemento* recupera(posicion p,Lista* l){
    if (p>=primero(l) && p<=l->ult){
        return &(l->elementos[p]);
    }
    return NULL;
}

void suprime(posicion p,Lista* l){
    posicion q,r;
    if ((p<primero(l)) || (p>l->ult)){
        imprimeError("La posicion a suprimir no existe");
    }
    else{
        r=--(l->ult);
        for(q=p;q<=r;q++){
            l->elementos[q]=l->elementos[q+1];
        }
    }
}

posicion siguiente(posicion p,Lista* l){
    if (p>=primero(l) && p<=l->ult)
        return p+1;
    imprimeError("Posicion siguiente no existe");
    return POSICION_ERROR;
}

posicion anterior(posicion p, Lista* l){
    if (p>primero(l) && p<=fin(l))
        return p-1;
    imprimeError("Posicion anterior no existe");
    return POSICION_ERROR;
}

posicion inicializa(Lista* l){
    l->ult=-1;
    return fin(l);
}

posicion primero(Lista* l){
    if (!estaVacia(l))
        return 0;
    else return fin(l);
    /*podria haber escrito tan solo return 0,
      pues si la lista esta vacia fin(l) devuelve 0
      sin embargo habria un warning de compilacion
    */
}

void imprimeLista(Lista* l){
    posicion p,q;
    int cuentaLineas=0;
    for(p=primero(l),q=fin(l);p!=q;p=siguiente(p,l)){
        imprimeElemento(recupera(p,l));
        printf("\n");
        cuentaLineas++;
        if (cuentaLineas%MAX_LINEAS_POR_PAGINA==0){
            pausar();
        }
    }
}

posicion fin(Lista* l){
    return l->ult+1;
}

booleano estaVacia(Lista* l){
    return l->ult<0;
}

booleano estaLlena(Lista* l){
    return l->ult>=MAX_ELEMENTOS-1;
}

void imprimeError(char* info){
    printf("%s\n",info);
}

#endif // OPERACIONES_DE_LISTAS_H_INCLUDED
