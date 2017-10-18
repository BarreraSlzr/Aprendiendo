#include <iostream>

using namespace std;

struct Profe{
    int codigo;
    string nombre;
};

int main()
{
    Profe* alberto;

    cout << "Tiempo dinamico" << endl;
    alberto=new Profe;
    alberto->codigo=7890;
    alberto->nombre="Luis Alberto Munoz Gomez";
    cout << "imprimiendo a alberto" << endl;
    cout << "codigo " << alberto->codigo << endl;
    cout << "nombre " << alberto->nombre << endl;

    delete alberto;
    return 0;
}
