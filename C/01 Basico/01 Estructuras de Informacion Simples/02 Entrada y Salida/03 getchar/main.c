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
    printf("entero         =%d\n",entero);
    printf("flotante       =%f\n",flotante);
    printf("multiplicacion =%f\n",multiplicacion);
    printf("division       =%d\n",division);
    printf("entero         =%d\n",entero);
    printf("flotante       =%f\n",flotante);
    getchar();//que pasa si comento esta y ejecuto el .exe en lugar de usar el IDE?
    printf("Presione entrar para terminar . . .");
    getchar();
    //system("pause");//esto no estandar, solo funciona en Windows
    return 0;
}
