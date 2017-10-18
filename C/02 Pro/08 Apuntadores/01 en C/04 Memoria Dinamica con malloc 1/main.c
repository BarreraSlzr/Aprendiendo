#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANO_NOMBRE 25

typedef struct Profesor{
    int codigo;
    char nombre[TAMANO_NOMBRE+1];
}Profe;

int main()
{
    Profe* alberto;

    printf("Tiempo dinamico\n");
    alberto=(Profe*)malloc(sizeof(Profe));
    alberto->codigo=7890;
    strcpy(alberto->nombre,"Luis Alberto Munoz Gomez");
    printf("imprimiendo a alberto\n");
    printf("codigo %d\n",alberto->codigo);
    printf("nombre %s\n",alberto->nombre);

    free(alberto);
    return 0;
}
