#include <stdio.h>
#include <stdlib.h>

#define ENERO 1
#define FEBRERO 2
#define C_1 1
#define C_31 31
#define C_28 28

int main()
{
    int dia,mes;
    printf("Dame el dia: ");
    scanf("%d",&dia);
    printf("Dame el mes: ");
    scanf("%d",&mes);
    if (dia>=C_1 && dia<=C_31){
        if (mes==ENERO){
            printf("Es un dia valido de Enero\n");
        }
        else if (mes==FEBRERO && dia<=C_28){
            printf("Es un dia valido de Febrero\n");
        }
        else{
            printf("Es un mes diferente de Enero y Febrero o el dia no es valido\n");
        }
    }
    else{
        printf("No es un dia valido\n");
    }
    return 0;
}
