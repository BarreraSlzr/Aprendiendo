#ifndef TIPOS_Y_CONSTANTES_H_INCLUDED
#define TIPOS_Y_CONSTANTES_H_INCLUDED

#define MAX_ELEMENTOS 25

using namespace std;

class Persona{
public:
    int clave;
    string nombre;
};

typedef Persona TipoElemento;

const int MAX_LINEAS_POR_PAGINA=20;

#endif // TIPOS_Y_CONSTANTES_H_INCLUDED
