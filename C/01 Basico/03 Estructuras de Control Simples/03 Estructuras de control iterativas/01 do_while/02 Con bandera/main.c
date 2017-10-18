#include <stdio.h>
#include <stdlib.h>

#define MIN_CALIFICACION 60

int main()
{
    //Iterativa hacer-mientras do-while
    int i;
    int calificacion;
    int alumnoInmaduro;  //bandera
    i=0;
    do{
        printf("Bienvenid@ al Curso de Programacion\n");
        i++;
        printf("por %da vez\n",i);
        printf("El maestro espera que tu estancia sea grata\n");
        printf("Que calificacion te ganaste al final del semestre? ");
        calificacion=-1;
        scanf("%d",&calificacion);
        alumnoInmaduro=calificacion<MIN_CALIFICACION;
        if (alumnoInmaduro){
            printf("Se le recomienda libros a leer.\n");
        }
    }
    while(alumnoInmaduro);
    printf("Felicidades! Aprobaste.\n");
    return 0;
}
