#include <stdio.h>
#include <stdlib.h>

#define MIN_CALIFICACION 60

int main()
{
    //Iterativa hacer-mientras do-while
    int i;  //variable contador
    int calificacion;
    i=0;
    do{
        printf("Bienvenid@ al Curso de Programacion\n");
        i++;  //incremento de 1 en 1
        printf("por %da vez\n",i);
        printf("El maestro espera que tu estancia sea grata\n");
        printf("Que calificacion te ganaste al final del semestre? ");
        calificacion=-1;
        scanf("%d",&calificacion);
    }
    while(calificacion<MIN_CALIFICACION);
    printf("Felicidades! Aprobaste.\n");
    return 0;
}
