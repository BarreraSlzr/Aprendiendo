#include <stdio.h>
#include <stdlib.h>

#define TOTAL_MESES 12

int main()
{
    char* meses[TOTAL_MESES];
    int i,mes;
    char* febrero="Febrero";

    printf("%s\n\n",febrero);
    printf("Presione entrar para continuar");
    getchar();

    meses[0]="Enero";
    meses[1]="Febrero";
    meses[2]="Marzo";
    meses[3]="Abril";
    meses[4]="Mayo";
    meses[5]="Junio";
    meses[6]="Julio";
    meses[7]="Agosto";
    meses[8]="Septiembre";
    meses[9]="Octubre";
    meses[10]="Noviembre";
    meses[11]="Diciembre";

    for(i=0;i<TOTAL_MESES;i++){
        printf("%s\n",meses[i]);
    }
    printf("Presione entrar para continuar");
    getchar();

    mes=8;
    printf("\nel mes es %s\n",meses[mes]);
    printf("Presione entrar para terminar");
    getchar();
    return 0;
}
