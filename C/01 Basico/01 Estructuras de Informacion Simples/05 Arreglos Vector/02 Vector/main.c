#include <stdio.h>
#include <stdlib.h>

#define TOTAL_PRACTICAS 7

int main()
{
    int practicas[TOTAL_PRACTICAS];//las colecciones se nombran en plural
    practicas[0]=100;//indices validos desde el cero
    practicas[1]=90;
    practicas[2]=95;
    practicas[3]=85;
    practicas[4]=90;
    practicas[5]=95;
    practicas[6]=100;//hasta el n-1
    printf("practica 1 = %d\n",practicas[0]);
    printf("practica 2 = %d\n",practicas[1]);
    printf("practica 3 = %d\n",practicas[2]);
    printf("practica 4 = %d\n",practicas[3]);
    printf("practica 5 = %d\n",practicas[4]);
    printf("practica 6 = %d\n",practicas[5]);
    printf("practica 7 = %d\n",practicas[6]);
    return 0;
}
