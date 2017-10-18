#ifndef TIPOS_Y_CONSTANTES_H_INCLUDED
#define TIPOS_Y_CONSTANTES_H_INCLUDED

#define TAMANO_NOMBRE 50

typedef struct{
    int clave;
    char nombre[TAMANO_NOMBRE];
}Persona;

typedef Persona RegistroOrdenable;
typedef int tipo_clave;

#endif // TIPOS_Y_CONSTANTES_H_INCLUDED
