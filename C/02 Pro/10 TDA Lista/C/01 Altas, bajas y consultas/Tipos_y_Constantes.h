#ifndef TIPOS_Y_CONSTANTES_H_INCLUDED
#define TIPOS_Y_CONSTANTES_H_INCLUDED

#define TAMANO_NOMBRE 50
#define MAX_ELEMENTOS 25

typedef enum {FALSO,VERDADERO} booleano;

typedef struct{
    int clave;
    char nombre[TAMANO_NOMBRE+1];
}Persona;

typedef Persona TipoElemento;

const int MAX_LINEAS_POR_PAGINA=20;

#endif // TIPOS_Y_CONSTANTES_H_INCLUDED
