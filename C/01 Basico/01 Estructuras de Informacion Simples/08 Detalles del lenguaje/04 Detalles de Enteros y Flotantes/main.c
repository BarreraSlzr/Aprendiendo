#include <stdio.h>
#include <stdlib.h>

int main()
{
	int enteroNegativo;
    short int enteroCortoNegativo=0x8000;  
    short otroEnteroCortoNegativo=0xF000;
    float flotante=-0.1e-5f;
    double doblePrecision=1e+35;
    printf("enteroCortoNegativo=%d\n",enteroCortoNegativo);
    printf("otroEnteroCortoNegativo=%d\n",otroEnteroCortoNegativo);
    printf("enteroNegativo=%d\n",enteroNegativo);
    printf("flotante=%f\n",flotante);
    printf("doblePrecision=%d",doblePrecision);
    return 0;
}
