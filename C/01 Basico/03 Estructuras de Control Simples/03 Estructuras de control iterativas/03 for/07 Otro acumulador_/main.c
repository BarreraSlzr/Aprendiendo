#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Iterativa desde for
    int i,j,suma;//suma es un acumulador
    for(suma=i=0,j=10;i<j;i++){
        printf("suma inicial=%d\t",suma);
        printf("i=%d\t",i);
        //suma=suma+i;
        suma+=i;
        printf("suma final=%d\n",suma);
    }
    printf("suma es %d\n",suma);
    return 0;
}
