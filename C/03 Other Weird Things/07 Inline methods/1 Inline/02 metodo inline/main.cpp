#include <iostream>

using namespace std;

class Persona{
    string curp;
    string nombre;
    int telefono;
public:
    void fijaCurp(string curp){
        this->curp=curp;
    }
    void fijaNombre(string nombre){
        this->nombre=nombre;
    }
    void fijaTelefono(int telefono){
        this->telefono=telefono;
    }
    string dameCurp(){
        return curp;
    }
    string dameNombre(){
        return nombre;
    }
    int dameTelefono(){
        return telefono;
    }
};

int main()
{
    Persona p;
    p.fijaCurp("MUGL790912IC7");
    p.fijaNombre("Luis Alberto");
    p.fijaTelefono(1234567);
    cout << "curp es " << p.dameCurp() << endl;
    //cout << "curp es " << p.curp << endl;//algo como esto provoca el metodo al ser inline
    cout << "nombre es " << p.dameNombre() << endl;
    cout << "telefono es " << p.dameTelefono() << endl;
    return 0;
}
