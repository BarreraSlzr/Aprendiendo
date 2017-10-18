#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

using namespace std;

class Persona{
    string nombre;
public:
    Persona(string nombre){
        this->nombre=nombre;
        cout << "Creating " << nombre << endl;
    }
    ~Persona(){
        cout << "Deleting " << dameNombre() << endl;
    }
    string dameNombre(){
        return nombre;
    }
};

#endif // PERSONA_H_INCLUDED
