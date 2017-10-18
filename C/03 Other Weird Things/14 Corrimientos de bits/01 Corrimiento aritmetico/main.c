#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    printf("\nCorrimiento aritmetico <<...\n");
    i=1;
    for(j=0;j<=10;j++){
        printf("1 por 2 a la %d = %d\n",j,i);
        i=i<<1;
    }

    printf("\nCorrimiento aritmetico >>...\n");
    i=256;
    for(j=0;j<=8;j++){
        printf("256 entre 2 a la %d = %d\n",j,i);
        i=i>>1;
    }

    printf("\nCorrimientos >> para negativos...\n");
    i=-256;
    for(j=0;j<=8;j++){
        printf("-256 entre 2 a la %d = %d\n",j,i);
        i=i>>1;
    }
    i=0x80000000;
    printf("MAX negativo es %d\n",i);
    i+=1;
    printf("le sumo 1 y ahora vale %d\n",i);

    i=i<<1;
    printf("tras corrimiento a la izquierda %d\n",i);

    printf("bytes...\n");

    return 0;
}
