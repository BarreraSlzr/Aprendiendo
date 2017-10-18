#include <stdio.h>
#include <stdlib.h>

#define TOTAL_PRACTICAS 7

int main()
{
    int practicas[TOTAL_PRACTICAS];
    int i;
    practicas[0]=100;
    practicas[1]=90;
    practicas[2]=95;
    practicas[3]=85;
    practicas[4]=90;
    practicas[5]=95;
    practicas[6]=100;
    for(i=0;i<TOTAL_PRACTICAS;i++){
        printf("practica %d = %d\n",i+1,practicas[i]);
    }
    return 0;
}
