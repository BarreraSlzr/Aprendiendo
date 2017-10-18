#include <stdio.h>
#include <stdlib.h>

#define MAX_INGRESOS 3

float ingresos[MAX_INGRESOS];
int ingresosCapturados; //no requere inicializacion pues toda global se inicia en cero

void capturarIngreso();
void listarIngresos();
void pausar();

int main()
{
    int i;
    for(i=0;i<MAX_INGRESOS;i++){
        capturarIngreso();
    }
    listarIngresos();
    return 0;
}

void capturarIngreso(){
    printf("Dame un ingreso mas: ");
    scanf("%f",&ingresos[ingresosCapturados++]);
}

void listarIngresos(){
    int i;
    for(i=0;i<MAX_INGRESOS;i++){
        printf("ingresos[%d]=%f\n",i,ingresos[i]);
    }
}

void pausar(){
    printf("Presione entrar para continuar");
    getchar();
}

