#ifndef TIPOS_Y_CONSTANTES_H_INCLUDED
#define TIPOS_Y_CONSTANTES_H_INCLUDED

#define TAMANO_NOMBRE 50

typedef enum {FALSO,VERDADERO} booleano;

typedef struct{
    int clave;
    char nombre[TAMANO_NOMBRE];
}Persona;

typedef Persona TipoElemento;

#endif // TIPOS_Y_CONSTANTES_H_INCLUDED
