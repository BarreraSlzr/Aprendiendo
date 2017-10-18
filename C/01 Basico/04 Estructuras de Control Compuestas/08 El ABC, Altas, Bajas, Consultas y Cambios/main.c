#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

#define MAX_PROFESORES 2
#define TAMANO_NOMBRE 50
#define TAMANO_RFC 13

typedef enum {FALSO,VERDADERO} booleano;
typedef enum {ALTA=1,BAJA,CONSULTA,CAMBIO,LISTAR,BUSQUEDA,SALIR} opcionesMenu;

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
    booleano libre;//libre para hacer capturas en un registro dado
}Persona;

Persona profesores[MAX_PROFESORES];

void limpiarRegistroProfesor(int indice);
void inicializarPrograma();
void modificarRegistroProfesor(int indice);
booleano elRegistroProfesorTieneDatos(int indice);
void mostrarProfesor(int indice);
void darDeAltaProfesor();
void darDeBajaProfesor();
void consultarProfesor();
void cambiarDatosDeProfesor();
void buscarProfesor();
void listarProfesores();
int elegirOpcionMenu();

int main()
{
    booleano continuaPrograma=VERDADERO;
    inicializarPrograma();
    do{
        switch(elegirOpcionMenu()){
            case ALTA:      darDeAltaProfesor();        break;
            case BAJA:      darDeBajaProfesor();        break;
            case CONSULTA:  consultarProfesor();        break;
            case CAMBIO:    cambiarDatosDeProfesor();   break;
            case LISTAR:    listarProfesores();         break;
            case BUSQUEDA:  buscarProfesor();           break;
            case SALIR:     continuaPrograma=FALSO;     break;
            default:        printf("Opcion no valida!\n");
        }
        continuaPrograma?pausar():0;
    }
    while(continuaPrograma);
    return 0;
}

void limpiarRegistroProfesor(int indice){
    int i=indice;
    profesores[i].codigo=0;//solo si deseo borrar informacion importante
    strcpy(profesores[i].nombre,"");//aqui se borra todo?
    strcpy(profesores[i].rfc,"");
    profesores[i].salario=0;
    profesores[i].fechaNacimiento.anio=0;
    profesores[i].fechaNacimiento.mes=0;
    profesores[i].fechaNacimiento.dia=0;
    profesores[i].libre=VERDADERO;//para la logica del programa esta seria suficiente
}

void inicializarPrograma(){
    int i;
    for(i=0;i<MAX_PROFESORES;i++){
        limpiarRegistroProfesor(i);
    }
}

void modificarRegistroProfesor(int indice){
    int i=indice;
    printf("Provee datos para el registro %d.\n",i+1);
    printf("Codigo:");
    scanf("%d",&profesores[i].codigo);
    printf("Nombre:");
    getchar();
    gets(profesores[i].nombre);
    printf("RFC:");
    gets(profesores[i].rfc);
    printf("Salario:");
    scanf("%f",&profesores[i].salario);
    printf("Fecha nacimiento aaaa/mm/dd:");
    scanf("%d/%d/%d",&profesores[i].fechaNacimiento.anio,
         &profesores[i].fechaNacimiento.mes,
         &profesores[i].fechaNacimiento.dia);
    profesores[i].libre=FALSO;
}

void darDeAltaProfesor(){
    booleano hayEspacioLibre;
    int i;
    printf("ALTA DE NUEVO PROFESOR\n\n");
    hayEspacioLibre=FALSO;
    for(i=0;i<MAX_PROFESORES;i++){
        if (profesores[i].libre){
            hayEspacioLibre=VERDADERO;
            break;
        }
        //else seguir buscando un espacio libre
    }
    if (hayEspacioLibre){
        modificarRegistroProfesor(i);
    }
    else{
        printf("No hay mas espacio para captura\n\n");
    }
}

booleano elRegistroProfesorTieneDatos(int indice){
    booleano tieneDatos=FALSO;
    if ((0<=indice)&&(indice<MAX_PROFESORES)){
        if (profesores[indice].libre){
            printf("\nRegistro sin datos\n");
        }
        else{
            tieneDatos=VERDADERO;
        }
    }
    else{
        printf("\nNo existe ese numero de registro\n");
    }
    return tieneDatos;
}

void mostrarProfesor(int indice){
    int i=indice;
    printf("Registro %d:\n",i+1);
    printf("Codigo=%d\n",profesores[i].codigo);
    printf("Nombre=%s\n",profesores[i].nombre);
    printf("RFC=%s\n",profesores[i].rfc);
    printf("Salario=%.2f\n",profesores[i].salario);
    printf("Fecha nacimiento=%04d/%02d/%02d\n",profesores[i].fechaNacimiento.anio,
           profesores[i].fechaNacimiento.mes,profesores[i].fechaNacimiento.dia);
}

void darDeBajaProfesor(){
    int i;
    char opcion;
    printf("BAJA DE PROFESOR\n\n");
    printf("Indica el numero de registro a eliminar (1 a %d): ",MAX_PROFESORES);
    scanf("%d",&i);
    i--;
    printf("\n");
    if (elRegistroProfesorTieneDatos(i)){
        mostrarProfesor(i);
        printf("\nEstas seguro de eliminar el registro (s/n)?");
        getchar();
        scanf("%c",&opcion);
        if (opcion=='S' || opcion=='s'){
            limpiarRegistroProfesor(i);
            printf("Registro eliminado!\n");
        }
        else{
            printf("Registro conservado!\n");
        }
    }
    //la funcion imprime en caso falso
}

void consultarProfesor(){
    int i;
    printf("CONSULTA DE UN PROFESOR\n\n");
    printf("Indica el numero de registro a consultar (1 a %d): ",MAX_PROFESORES);
    scanf("%d",&i);
    i--;
    printf("\n");
    if (elRegistroProfesorTieneDatos(i)){
        mostrarProfesor(i);
    }
    //la funcion imprime en caso falso
}

void cambiarDatosDeProfesor(){
    int i;
    printf("CAMBIO DE DATOS DE UN PROFESOR\n\n");
    printf("Indica el numero de registro a modificar (1 a %d): ",MAX_PROFESORES);
    scanf("%d",&i);
    i--;
    printf("\n");
    if (elRegistroProfesorTieneDatos(i)){
        mostrarProfesor(i);
        modificarRegistroProfesor(i);
    }
    //la funcion imprime en caso falso
}

void listarProfesores(){
    printf("LISTADO DE PROFESORES\n\n");
    booleano hayProfesores=FALSO;
    int i;
    printf("#\tCodigo\tNombre\n");
    for(i=0;i<MAX_PROFESORES;i++){
        if (!profesores[i].libre){
            hayProfesores=VERDADERO;
            printf("%d\t",i+1);
            printf("%d\t",profesores[i].codigo);
            printf("%s\n",profesores[i].nombre);
        }
    }
    if (!hayProfesores){
        printf("No hay profesores que mostrar.\n");
    }
}

void buscarProfesor(){
    char buscado[TAMANO_NOMBRE+1];
    char* patron;
    int i,encontrados;
    printf("BUSQUEDA DE PROFESOR\n\n");
    printf("Indica el nombre del profesor: ");
    getchar();
    gets(buscado);
    encontrados=0;
    printf("\n");
    for(i=0;i<MAX_PROFESORES;i++){
        patron=strstr(profesores[i].nombre,buscado);
        if (patron!=NULL){
            mostrarProfesor(i);
            printf("\n");
            encontrados++;
        }
        //else seguir buscando
    }
    if (encontrados){
        printf("Se encontro %d registro(s) con la palabra buscada\n",encontrados);
    }
    else{
        printf("No se encontro algun registro con la palabra buscada\n");
    }
}

int elegirOpcionMenu(){
    int opcion;
    system(CLEAR);
    imprimirCentrado("REGISTRO DE PROFESORES","*");
    printf("\n");
    printf("1. Alta de nuevo profesor\n");
    printf("2. Baja de profesor\n");
    printf("3. Consulta de un profesor\n");
    printf("4. Cambio de datos de un profesor\n");
    printf("5. Listado de profesores\n");
    printf("6. Busqueda de profesor\n");
    printf("7. Salir\n");
    printf("Opcion: ");
    scanf("%d",&opcion);
    if (opcion>=ALTA && opcion<=BUSQUEDA){
        system(CLEAR);
    }
    return opcion;
}
