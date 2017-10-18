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
    Persona p,q;
    p.fijaCurp("MUGL790912IC7");
    p.fijaNombre("Luis Alberto");
    p.fijaTelefono(1234567);
    q.fijaCurp("MUGL790912IC8");
    q.fijaNombre("LUIS ALBERTO");
    q.fijaTelefono(2345678);
    cout << "curp es " << p.dameCurp() << endl;
    cout << "nombre es " << p.dameNombre() << endl;
    cout << "telefono es " << p.dameTelefono() << endl;
    cout << "curp es " << q.dameCurp() << endl;
    cout << "nombre es " << q.dameNombre() << endl;
    cout << "telefono es " << q.dameTelefono() << endl;
    return 0;
}
