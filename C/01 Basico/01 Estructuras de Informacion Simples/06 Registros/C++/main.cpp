#include <iostream>

using namespace std;

struct Persona{
    int codigo;
    string nombre;
    string rfc;
    float salario;
};

int main()
{
    Persona profe,inge;

    profe.codigo=2233517;
    profe.nombre="Luis Alberto Munoz Gomez";
    profe.rfc="MUGL790912IC7";
    profe.salario=5000;
    inge=profe;
    inge.salario=25900;

    cout << "Imprimiendo variable registro profe:" << endl;
    cout << "Codigo=" << profe.codigo << endl;
    cout << "Nombre="  << profe.nombre << endl;
    cout << "RFC=" << profe.rfc << endl;
    cout << "Salario=" << profe.salario << endl;

    cout << "\nImprimiendo variable registro inge:" << endl;
    cout << "Codigo=" << inge.codigo << endl;
    cout << "Nombre=" << inge.nombre << endl;
    cout << "RFC=" << inge.rfc << endl;
    cout << "Salario=" << inge.salario << endl;

    return 0;
}
