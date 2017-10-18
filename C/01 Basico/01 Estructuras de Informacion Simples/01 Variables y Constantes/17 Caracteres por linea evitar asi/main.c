#include <stdio.h>
#include <stdlib.h>

#define PORCENTAJE_IVA 16

int main()
{
    float ingreso,iva,subtotal,retencionISR,retencionIVA,total;
    ingreso=10000;
    iva=ingreso*PORCENTAJE_IVA/100;
    subtotal=ingreso+iva;
    retencionISR=0;
    retencionIVA=0;
    total=0;
    printf("Ingreso  = %f\nIVA      = %f\nSubtotal = %f\nRetencionISR = %f\nRetencionIVA=%f\nTotal=%f\n",ingreso,iva,subtotal,retencionISR,retencionIVA,total);
    return 0;
}
