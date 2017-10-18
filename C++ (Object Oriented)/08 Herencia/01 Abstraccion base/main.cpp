#include <iostream>
#include <sstream>

using namespace std;

class Fecha{
public:
    int anio;
    int mes;
    int dia;
};

class Empleado{
    string nombre;
    int edad;
    double salario;
    Fecha fechaNacimiento;
public:
    Empleado(string nombre, int edad,double salario){
        this->nombre = nombre;
        this->edad = edad;
        this->salario=salario;
        fechaNacimiento.anio=1979;
        fechaNacimiento.mes=9;
        fechaNacimiento.dia=12;
    }

    string dameInfoEmpleado(){
        stringstream info;
        string s;
        info << "Nombre:" << nombre;
        info << "\nEdad:" << edad;
        info << "\nSalario:" << salario;
        info << "\nFechaNacimiento:" << fechaNacimiento.anio << "/" <<
            fechaNacimiento.mes << "/" << fechaNacimiento.dia << "\n";
        s=info.str();
        return s;
    }

};

int main()
{
    Empleado luis("Luis",31,18000);
    cout << "---\n" << luis.dameInfoEmpleado();
    return 0;
}
