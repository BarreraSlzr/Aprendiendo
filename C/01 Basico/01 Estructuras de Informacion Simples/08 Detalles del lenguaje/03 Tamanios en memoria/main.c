#include <stdio.h>
#include <stdlib.h>

int main()
{
    short enteroCorto=32767;
    int entero=2147483647;
    long enteroLargo=entero;
    unsigned int enteroSinSigno=-1; 
    float flotante=8.9;
    double doble=9.8;
    printf("Tamaños de enteros:\n\n");
    printf("enteroCorto=%d\n",sizeof(enteroCorto));
    printf("entero=%d\n",sizeof(entero));
    printf("enteroLargo=%d\n",sizeof(enteroLargo));
    printf("enteroSinSigno=%d\n",sizeof(enteroSinSigno));
    printf("flotante=%d\n",sizeof(flotante));
    printf("doble=%d\n",sizeof(doble));
    return 0;
}
