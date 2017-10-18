#include <stdio.h>
#include <stdlib.h>

#define MAX_INGRESOS 3

float ingresos[MAX_INGRESOS];
int ingresosCapturados; //no requere inicializacion pues toda global se inicia en cero

void capturarIngreso();
void listarIngresos();
void listarSoloIngresosCapturados();
void pausar();

int main()
{
    int i;
    listarIngresos();
    for(i=0;i<MAX_INGRESOS;i++){
        capturarIngreso();
        listarIngresos();
        //listarSoloIngresosCapturados(); //descomentar esta y comentar la linea anterior
    }
    listarIngresos();
    return 0;
}

void listarSoloIngresosCapturados(){
    int i;
    printf("Lista de solo los ingresos capturados\n");
    for(i=0;i<ingresosCapturados;i++){
        printf("ingresos[%d]=%f\n",i,ingresos[i]);
    }
}

void capturarIngreso(){
    printf("Dame un ingreso mas: ");
    scanf("%f",&ingresos[ingresosCapturados++]);
}

void listarIngresos(){
    int i;
    printf("Lista de todos los ingresos\n");
    for(i=0;i<MAX_INGRESOS;i++){
        printf("ingresos[%d]=%f\n",i,ingresos[i]);
    }
}

void pausar(){
    printf("Presione entrar para continuar");
    getchar();
}
