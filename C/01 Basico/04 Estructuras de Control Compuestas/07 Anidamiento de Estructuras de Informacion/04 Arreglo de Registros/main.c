#include <stdio.h>
#include <stdlib.h>

#define MAX_PROFESORES 2
#define TAMANO_NOMBRE 50
#define TAMANO_RFC 13

typedef struct{
    int anio;
    int mes;
    int dia;
}Fecha;

typedef struct{
    int codigo;
    char nombre[TAMANO_NOMBRE+1];
    char rfc[TAMANO_RFC+1]; //13 caracteres más el caracter '\0'
    float salario;
    Fecha fechaNacimiento;
}Persona;

int main()
{
    Persona profesores[MAX_PROFESORES];
    int i;

    printf("Captura de datos en arreglo:\n");
    for(i=0;i<MAX_PROFESORES;i++){
        printf("\nRegistro %d:\n",i);
        printf("Codigo:");
        scanf("%d",&profesores[i].codigo);
        printf("Nombre:");
        getchar();
        gets(profesores[i].nombre);
        printf("RFC:");
        scanf("%s",profesores[i].rfc);
        printf("Salario:");
        scanf("%f",&profesores[i].salario);
        printf("Fecha nacimiento aaaa/mm/dd:");
        scanf("%d/%d/%d",&profesores[i].fechaNacimiento.anio,
           &profesores[i].fechaNacimiento.mes,
           &profesores[i].fechaNacimiento.dia);
    }

    printf("\nImpresion de datos en arreglo:\n");
    for(i=0;i<MAX_PROFESORES;i++){
        printf("\nRegistro %d:\n",i);
        printf("Codigo=%d\n",profesores[i].codigo);
        printf("Nombre=%s\n",profesores[i].nombre);
        printf("RFC=%s\n",profesores[i].rfc);
        printf("Salario=%.2f\n",profesores[i].salario);
        printf("Fecha nacimiento=%04d/%02d/%02d\n",profesores[i].fechaNacimiento.anio,
               profesores[i].fechaNacimiento.mes,profesores[i].fechaNacimiento.dia);
    }

    return 0;
}
