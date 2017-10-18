#include <stdio.h>
#include <stdlib.h>

int main()
{
    short enteroCorto=32767;
    short enteroCortoFueraRango=enteroCorto+1;
    int entero=2147483650;
    int enteroFueraRango=entero;
    long enteroLargo=entero;
    long enteroLargoFueraRango=enteroLargo;
    unsigned int enteroSinSigno=-1; 
    unsigned int otroSinSigno=2200000000u;
    enteroFueraRango++;
    enteroLargoFueraRango++;
    printf("enteroCorto=%d\n",enteroCorto);
    printf("enteroCortoFueraRango=%d\n",enteroCortoFueraRango);
    printf("entero=%d\n",entero);
    printf("enteroFueraRango=%d\n",enteroFueraRango);
    printf("enteroLargo=%ld\n",enteroLargo);
    printf("enteroLargoFueraRango=%ld\n",enteroLargoFueraRango);
    printf("enteroSinSigno=%d\n",enteroSinSigno);
    printf("enteroSinSigno=%u\n",enteroSinSigno);
    printf("otroSinSigno=%u\n",otroSinSigno);
    return 0;
}
