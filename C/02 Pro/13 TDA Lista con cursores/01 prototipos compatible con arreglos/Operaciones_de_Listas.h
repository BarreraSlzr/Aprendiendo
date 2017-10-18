#ifndef OPERACIONES_DE_LISTAS_H_INCLUDED
#define OPERACIONES_DE_LISTAS_H_INCLUDED

#include "Tipos_y_Constantes.h"
#include "util.h"

typedef int posicion;

typedef struct{
    TipoElemento elemento;
    posicion sig;
}RegistroEspacio;

RegistroEspacio espacio[MAX_ELEMENTOS];

typedef posicion Lista;
const posicion POSICION_NULA=-1;
const posicion POSICION_ERROR=-2;

Lista disponible=0;

void inicializaEspacio();  //adicional requerido para cursores
booleano mueve(posicion* p,posicion* q);
void inserta(TipoElemento* x,posicion p,Lista* l);
posicion localiza(TipoElemento* x,Lista* l);
TipoElemento* recupera(posicion p,Lista* l);
void suprime(posicion p,Lista* l);
posicion siguiente(posicion p,Lista* l);
posicion anterior(posicion p,Lista* l);
posicion inicializa(Lista* l);
posicion primero(Lista* l);
void imprimeLista(Lista* l);
posicion fin(Lista* l);
booleano estaVacia(Lista* l);
booleano estaLlena();
void imprimeElemento(TipoElemento* x);
void imprimeError(char* info);
booleano mismo(TipoElemento* x,TipoElemento* y);

void inicializaEspacio(){  //adicional requerido para cursores
    posicion i,j;
    for(i=0,j=MAX_ELEMENTOS-1;i<j;i++){
        espacio[i].sig=i+1;
    }
    espacio[i].sig=POSICION_NULA;
}

//coloca la celda apuntada por p delante de la celda apuntada por q
booleano mueve(posicion* p,posicion* q){
    posicion temp;
    if (*p<0 || *p>=MAX_ELEMENTOS){
        imprimeError("La celda no existe");
        return FALSO;
    }
    else{
        temp=*q;
        *q=*p;
        *p=espacio[*q].sig;
        espacio[*q].sig=temp;
        return VERDADERO;
    }
}

void inserta(TipoElemento* x,posicion p,Lista* l){
    if (estaLlena()){
        imprimeError("La lista esta llena");
    }
    else if (p==POSICION_NULA){
        if (mueve(&disponible,l)){
            espacio[*l].elemento=*x;
        }
    }
    else if (p<0 || p>=MAX_ELEMENTOS){
        imprimeError("La posicion a insertar no existe");
    }
    else{
        if (mueve(&disponible,&(espacio[p].sig))){
            espacio[espacio[p].sig].elemento=*x;
        }
    }
}

posicion localiza(TipoElemento* x,Lista* l){
    posicion p,q;
    for(p=primero(l),q=fin(l);p!=q;p=siguiente(p,l)){
        if (mismo(recupera(p,l),x))
            return p;
    }
    return p;//fin(l)
}

TipoElemento* recupera(posicion p,Lista* l){
    if (p==POSICION_NULA){
        return &(espacio[*l].elemento);
    }
    else if (p>=0 && p<MAX_ELEMENTOS){
        return &(espacio[espacio[p].sig].elemento);
    }
    else return NULL;
}

void suprime(posicion p,Lista* l){
    if (p==POSICION_NULA){
        mueve(l,&disponible);
    }
    else if (p<0 || p>=MAX_ELEMENTOS){
        imprimeError("La posicion a suprimir no existe");
    }
    else{
        mueve(&(espacio[p].sig),&disponible);
    }
}

posicion siguiente(posicion p,Lista* l){
    if (p==POSICION_NULA)
        return *l;
    else if (p>=0 && p<MAX_ELEMENTOS)
        return espacio[p].sig;
    else{
        imprimeError("Posicion siguiente no existe");
        return POSICION_ERROR;
    }
}

posicion anterior(posicion p,Lista* l){
    posicion ant;
    if (p==*l){
        return POSICION_NULA;
    }
    else{
        ant=*l;
        while(espacio[ant].sig!=POSICION_NULA && espacio[ant].sig!=p){
            ant=siguiente(ant,l);
        }
        if (espacio[ant].sig==p)
            return ant;
        else{
            imprimeError("Posicion anterior no existe");
            return POSICION_ERROR;
        }
    }
}

posicion inicializa(Lista* l){
    *l=POSICION_NULA;
    return *l;//fin(l)
}

posicion primero(Lista* l){
    if (!estaVacia(l))
        return POSICION_NULA;
    else return fin(l);//POSICION_NULA
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
    if (!estaVacia(l)){
        posicion p=*l;
        while(espacio[p].sig!=POSICION_NULA){
            p=siguiente(p,l);
        }
        return p;
    }
    else{
        return POSICION_NULA;
    }
}

booleano estaVacia(Lista* l){
    return *l==POSICION_NULA;
}

booleano estaLlena(){//ya no es indispensable recibir el apuntador a la lista
    return disponible==POSICION_NULA;
}

void imprimeError(char* info){
    printf("%s\n",info);
}

#endif // OPERACIONES_DE_LISTAS_H_INCLUDED
