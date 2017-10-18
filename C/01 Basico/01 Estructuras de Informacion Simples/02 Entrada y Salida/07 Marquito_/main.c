#include <stdio.h>
#include <stdlib.h>

int main()
{
    int entero,division;
    float flotante,multiplicacion;
    printf("Dame un entero\n");
    scanf("%d",&entero);
    printf("Dame un flotante\n");
    scanf("%f",&flotante);
    multiplicacion=entero*flotante;
    division=entero/flotante;
    printf("*__________________________*\n");
    printf("|entero         =%7d\n",entero);
    printf("|flotante       =%10.2f\n",flotante);
    printf("|multiplicacion =%10.2f\n",multiplicacion);
    printf("|division       =%7d\n",division);
    printf("|entero         =%-10d\n",entero);
    printf("|flotante       =%-10.2f\n",flotante);
    printf("*__________________________*\n");
    return 0;
}
