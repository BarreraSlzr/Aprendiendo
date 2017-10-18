#include <stdio.h>
#include <stdlib.h>

#define TOTAL_VALORES 3

int leerValor();
void pedirValor(int* a);
void pedirOtroValor(int* a);

int main()
{
    int x,y,z;
    y=leerValor();
    printf("y=%d\n",y);
    x=0;//podria no inicializarla pues no se necesita valor previos
    pedirValor(&x);//sale con contenido modificado
    printf("x=%d\n",x);
    pedirOtroValor(&z);//sale con contenido modificado
    printf("z=%d\n",z);
    printf("direccion de memoria de z es %p\n",&z);
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
    printf("dame el valor de 'b': ");
    scanf("%d",&b);
    printf("el valor previo de donde hace referencia 'a' es %d\n",*a);
    *a=b;//modifica el contenido de "x" de main
    printf("el valor almacenado en hace referencia 'a' es %d\n",*a);
}

void pedirOtroValor(int* a){//recibe referencia a variable int
    printf("dame otro valor: ");
    scanf("%d",a);
    printf("direccion de memoria a donde apunta 'a' es %p\n",a);
}
