#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores[20]={100,90,95,85,90,95,100};
    //int valores[10]={100,90,95,85,90,95,100};//que pasa si descomentas esta?
    //y tras decomentar observa que valor aparece en el indice 10
    int i,j;
    for(i=0,j=20;i<j;i++){
        printf("valores[%d]=%d\n",i,valores[i]);
    }
    return 0;
}
