#include <stdio.h>
#include <stdlib.h>

#define MAX_INGRESOS 3

void capturarIngreso(float ingresos[],int* ingresosCapturados);
void listarIngresos(float ingresos[]);
void listarSoloIngresosCapturados(float ingresos[],int ingresosCapturados);
void pausar();

int main()
{
    float ingresos[MAX_INGRESOS]={0};
    int ingresosCapturados=0;
    int i;
    listarIngresos(ingresos);
    for(i=0;i<MAX_INGRESOS;i++){
        capturarIngreso(ingresos,&ingresosCapturados);
        listarIngresos(ingresos);//comentar esta linea y...
        //listarSoloIngresosCapturados(ingresos,ingresosCapturados); //descomentar esta otra
    }
    listarIngresos(ingresos);
    return 0;
}

void listarSoloIngresosCapturados(float ingresos[],int ingresosCapturados){
    int i;
    printf("Lista de solo los ingresos capturados\n");
    for(i=0;i<ingresosCapturados;i++){
        printf("ingresos[%d]=%f\n",i,ingresos[i]);
    }
}

void capturarIngreso(float ingresos[],int* ingresosCapturados){
    printf("Dame un ingreso mas: ");
    scanf("%f",&ingresos[(*ingresosCapturados)++]);//comentar esta y...
    //scanf("%f",&ingresos[*ingresosCapturados++]);//notese el error al descomentar esta
}

void listarIngresos(float ingresos[]){
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
