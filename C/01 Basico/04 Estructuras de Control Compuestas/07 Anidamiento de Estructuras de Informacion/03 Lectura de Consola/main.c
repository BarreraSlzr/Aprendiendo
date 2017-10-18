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
    char rfc[TAMANO_RFC+1]; //13 caracteres más el caracter '\0'
    float salario;
    Fecha fechaNacimiento;
}Persona;

int main()
{
    Persona luisAlberto;
    printf("\nSolicitando datos de variable luisAlberto:\n");
    printf("Codigo:");
    scanf("%d",&luisAlberto.codigo);
    printf("Nombre:");
    getchar();
    gets(luisAlberto.nombre);
    printf("RFC:");
    scanf("%s",luisAlberto.rfc);
    printf("Salario:");
    scanf("%f",&luisAlberto.salario);
    printf("Fecha nacimiento aaaa/mm/dd:");
    scanf("%d/%d/%d",&luisAlberto.fechaNacimiento.anio,
          &luisAlberto.fechaNacimiento.mes,&luisAlberto.fechaNacimiento.dia);

    printf("Imprimiendo variable registro luisAlberto:\n");
    printf("Codigo=%d\n",luisAlberto.codigo);
    printf("Nombre=%s\n",luisAlberto.nombre);
    printf("RFC=%s\n",luisAlberto.rfc);
    printf("Salario=%.2f\n",luisAlberto.salario);
    printf("Fecha nacimiento=%04d/%02d/%02d\n",luisAlberto.fechaNacimiento.anio,
           luisAlberto.fechaNacimiento.mes,luisAlberto.fechaNacimiento.dia);

    return 0;
}
