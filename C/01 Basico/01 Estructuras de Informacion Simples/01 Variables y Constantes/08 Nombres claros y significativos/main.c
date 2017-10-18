#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ingreso,iva,subtotal;
    ingreso=10000;
    iva=ingreso*0.16;
    subtotal=ingreso+iva;
    printf("Ingreso  = %f\n",ingreso);
    printf("IVA      = %f\n",iva);
    printf("Subtotal = %f\n",subtotal);
    return 0;
}
