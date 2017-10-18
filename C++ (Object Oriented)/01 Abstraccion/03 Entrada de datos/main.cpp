#include <iostream>
#include <string.h>

using namespace std;

class Persona{
public:
    int codigo;
    string nombre;
    string rfc;
    float salario;
};

int main()
{
    Persona profe,inge;

    cout << "Dame el codigo: ";
    cin >> profe.codigo;
    cout << "Dame el nombre: ";
    cin.ignore();
    getline(cin,profe.nombre);
    cout << "Dame el rfc: ";
    cin >> profe.rfc;
    cout << "Dame el salario: ";
    cin >> profe.salario;

    inge=profe;
    inge.salario+=20000;

    cout << "Imprimiendo variable profe:" << endl;
    cout << "Codigo=" << profe.codigo << endl;
    cout << "Nombre="  << profe.nombre << endl;
    cout << "RFC=" << profe.rfc << endl;
    cout << "Salario=" << profe.salario << endl;

    cout << "\nImprimiendo variable inge:" << endl;
    cout << "Codigo=" << inge.codigo << endl;
    cout << "Nombre=" << inge.nombre << endl;
    cout << "RFC=" << inge.rfc << endl;
    cout << "Salario=" << inge.salario << endl;

    return 0;
}
