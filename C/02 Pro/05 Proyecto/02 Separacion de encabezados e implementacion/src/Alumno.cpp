#include "Alumno.h"

Alumno::Alumno()
{
    nombre="Luis";
}

Alumno::~Alumno()
{
    //dtor
}

string Alumno::dameNombre(){
    return nombre;
}
