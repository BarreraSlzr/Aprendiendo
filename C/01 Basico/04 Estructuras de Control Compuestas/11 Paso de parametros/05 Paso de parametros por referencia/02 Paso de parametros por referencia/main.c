#include <stdio.h>
#include <stdlib.h>

#define TOTAL_VALORES 3

int leerValor();
void pedirValor(int* a);

int main()
{
    int x,y;
    y=leerValor();
    printf("y=%d\n",y);
    x=0;//podria no inicializarla pues no se necesita valor previos
    pedirValor(&x);//sale con contenido modificado
    printf("x=%d\n",x);
    return 0;
}

int leerValor(){
    int b;
    printf("dame un valor: ");
    scanf("%d",&b);
    return b;
}

void pedirValor(int* a){//recibe referencia a variable int
    int b;
    printf("dame un valor: ");
    scanf("%d",&b);
    *a=b;//modifica el contenido de "x" de main
}

