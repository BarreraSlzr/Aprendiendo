#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

using namespace std;

class Persona{
    string nombre;
public:
    Persona(string nombre){
        fijaNombre(nombre);
    }
    void fijaNombre(string n){
        nombre=n;
    }
    string dameNombre(){
        return nombre;
    }
};

#endif // PERSONA_H_INCLUDED
