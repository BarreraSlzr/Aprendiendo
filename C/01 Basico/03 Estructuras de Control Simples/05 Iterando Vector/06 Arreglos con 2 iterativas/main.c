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
    for(i=0;i<TOTAL_PRACTICAS;i++){
        printf("Practica %d = %d\n",i+1,practicas[i]);
    }
    return 0;
}
