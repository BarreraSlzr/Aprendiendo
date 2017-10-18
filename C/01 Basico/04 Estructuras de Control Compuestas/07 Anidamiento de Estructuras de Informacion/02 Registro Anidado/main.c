#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    char rfc[TAMANO_RFC+1];//13 caracteres más el caracter '\0'
    float salario;
    Fecha fechaNacimiento;
}Persona;

int main()
{
    Persona profe,inge;

    profe.codigo=2233517;
    strcpy(profe.nombre,"Luis Alberto Munoz Gomez");
    strcpy(profe.rfc,"MUGL790912IC7");
    profe.salario=5000;
    profe.fechaNacimiento.anio=1979;
    profe.fechaNacimiento.mes=9;
    profe.fechaNacimiento.dia=12;

    inge=profe;
    inge.salario+=20000;

    printf("Imprimiendo variable registro profe:\n");
    printf("Codigo=%d\n",profe.codigo);
    printf("Nombre=%s\n",profe.nombre);
    printf("RFC=%s\n",profe.rfc);
    printf("Salario=%.2f\n",profe.salario);
    printf("Fecha nacimiento=%4d/%02d/%02d\n",profe.fechaNacimiento.anio,
           profe.fechaNacimiento.mes,profe.fechaNacimiento.dia);

    printf("\nImprimiendo variable registro inge:\n");
    printf("Codigo=%d\n",inge.codigo);
    printf("Nombre=%s\n",inge.nombre);
    printf("RFC=%s\n",inge.rfc);
    printf("Salario=%.2f\n",inge.salario);
    printf("Fecha nacimiento=%04d/%02d/%02d\n",inge.fechaNacimiento.anio,
           inge.fechaNacimiento.mes,inge.fechaNacimiento.dia);

    return 0;
}
