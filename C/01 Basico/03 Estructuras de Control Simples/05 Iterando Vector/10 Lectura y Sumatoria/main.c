#include <stdio.h>
#include <stdlib.h>

#define TOTAL_ALUMNOS 5

int main()
{
    int i,calificacionesParcial1[TOTAL_ALUMNOS];
    int calificacionesParcial2[TOTAL_ALUMNOS];
    float promedioParcial1,promedioParcial2;
    float sumaParcial1,sumaParcial2;
    printf("Dame las calificaciones de los alumnos en primer parcial:\n");
    for(i=0;i<TOTAL_ALUMNOS;i++){
        printf("alumno %d: ",i);
        scanf("%d",&(calificacionesParcial1[i]));
    }
    printf("Dame las calificaciones de los alumnos en segundo parcial:\n");
    for(i=0;i<TOTAL_ALUMNOS;i++){
        printf("alumno %d: ",i);
        scanf("%d",&(calificacionesParcial2[i]));
    }
    for(i=0,sumaParcial1=sumaParcial2=0;i<TOTAL_ALUMNOS;i++){
        sumaParcial1+=calificacionesParcial1[i];
        sumaParcial2+=calificacionesParcial2[i];
    }
    promedioParcial1=sumaParcial1/TOTAL_ALUMNOS;
    promedioParcial2=sumaParcial2/TOTAL_ALUMNOS;
    printf("Los promedios son:\n");
    printf("Primer parcial = %f\n",promedioParcial1);
    printf("Segundo parcial = %f\n",promedioParcial2);
    return 0;
}
