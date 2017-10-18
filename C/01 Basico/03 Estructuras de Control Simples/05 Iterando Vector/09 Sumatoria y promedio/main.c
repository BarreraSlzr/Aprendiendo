#include <stdio.h>
#include <stdlib.h>

#define TOTAL_PRACTICAS 7

int main()
{
    int i,practicas[TOTAL_PRACTICAS];
    float suma,promedio;
    practicas[0]=100;
    practicas[1]=90;
    practicas[2]=95;
    practicas[3]=85;
    practicas[4]=90;
    practicas[5]=95;
    practicas[6]=100;
    for(i=0,suma=0;i<TOTAL_PRACTICAS;i++){
        printf("practica %d = %d\n",i+1,practicas[i]);
        suma+=practicas[i]; //suma=suma+practicas[i];
    }
    promedio=suma/TOTAL_PRACTICAS;
    printf("promedio es %f\n",promedio);
    return 0;
}
