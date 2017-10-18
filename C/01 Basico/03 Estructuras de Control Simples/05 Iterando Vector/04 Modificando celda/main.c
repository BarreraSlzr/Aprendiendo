#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[]={100,90,95,85,90,95,100};
    int i,j,indice,valor;
    printf("valores[2]=%d\n\n",valores[2]);
    for(i=0,j=7;i<j;i++){
        printf("valores[%d]=%d\n",i,valores[i]);
    }
    printf("\nDime el indice que deseas consultar: ");
    scanf("%d",&indice);
    printf("valores[%d]=%d\n",indice,valores[indice]);
    printf("\nDime el indice que deseas modificar: ");
    scanf("%d",&indice);
    printf("Dame el valor a guardar: ");
    scanf("%d",&valor);
    valores[indice]=valor;
    for(i=0,j=7;i<j;i++){
        printf("valores[%d]=%d\n",i,valores[i]);
    }
    return 0;
}
