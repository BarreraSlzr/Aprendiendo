#ifndef TIPOS_Y_CONSTANTES_H_INCLUDED
#define TIPOS_Y_CONSTANTES_H_INCLUDED

#define TAMANO_NOMBRE 50
#define MAX_ELEMENTOS 3

typedef enum {FALSO,VERDADERO} booleano;

typedef struct{
    int clave;
    char nombre[TAMANO_NOMBRE];
}Persona;

typedef Persona TipoElemento;

const int MAX_LINEAS_POR_PAGINA=20;

#endif // TIPOS_Y_CONSTANTES_H_INCLUDED
