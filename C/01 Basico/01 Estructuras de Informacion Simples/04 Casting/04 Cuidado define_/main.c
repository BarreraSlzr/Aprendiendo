#include <stdio.h>
#include <stdlib.h>

#define PORCENTAJE_IVA 16/100

int main()
{
    float monto,iva;
    printf("Dame un monto\n");
    scanf("%f",&monto);
    iva=PORCENTAJE_IVA*monto;
    printf("el IVA es: %f",iva);
    return 0;
}
