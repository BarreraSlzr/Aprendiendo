#include <stdio.h>
#include <stdlib.h>

#define PORCENTAJE_IVA 16
#define C_100 100

int main()
{
    float ingreso,iva,subtotal;
    ingreso=10000;
    iva=ingreso*PORCENTAJE_IVA/C_100;
    subtotal=ingreso+iva;
    printf("Ingreso  = %f\n",ingreso);
    printf("IVA      = %f\n",iva);
    printf("Subtotal = %f\n",subtotal);
    return 0;
}
