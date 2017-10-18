#include <stdio.h>
#include <stdlib.h>

#define TOTAL_VUELTAS 5

int main()
{
    int sumatoria; //acumulador
    int i,entrada;
    i=0;
    sumatoria=0;
    entrada=10;
    do{
        //sumatoria=sumatoria+entrada;
        //sumatoria+=entrada;
        //sumatoria=sumatoria+i;
        sumatoria+=i;
        i++;
    }
    while(i<TOTAL_VUELTAS);
    printf("i=%d\n",i);
    printf("sumatoria=%d",sumatoria);
    return 0;
}
