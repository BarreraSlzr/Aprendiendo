#include <stdio.h>
#include <stdlib.h>

#define TOTAL_PRACTICAS 3

int main()
{
    int practicas[TOTAL_PRACTICAS],i;
    for(i=0;i<TOTAL_PRACTICAS;i++){
        printf("Dame el valor de practica %d: ",i+1);
        scanf("%d",&(practicas[i]));
    }
    printf("Practica 1 = %d\n",practicas[0]);
    printf("Practica 2 = %d\n",practicas[1]);
    printf("Practica 3 = %d\n",practicas[2]);
    return 0;
}
