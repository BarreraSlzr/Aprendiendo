#include <iostream>
#include <sstream>
#include "util.h"

using namespace std;

class MiFecha{
public:
    int anio;
    int mes;
    int dia;
};

class Empleado{
    string nombre;
    int edad;
    double salario;
    MiFecha fechaNacimiento;
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
        info << "Nombre:" << nombre << "\n" << "Edad:" << edad << "\n" <<
            "Salario:" << salario << "\n" <<
            "FechaNacimiento:" << fechaNacimiento.anio << "/" <<
            fechaNacimiento.mes << "/" << fechaNacimiento.dia << "\n";
        return info.str();
    }
};

class Jefe : public Empleado{
    string departamento;
public:
    Jefe(string nombre, int edad,double salario,string departamento):
    Empleado(nombre, edad,salario){
        this->departamento=departamento;
    }
    string dameInfoJefe(){
        return dameInfoEmpleado()+"Departamento:"+departamento+"\n";
    }
};

int main()
{
    Empleado luis("Luis",31,18000);
    Jefe luisAlberto("Luis Alberto",32,30000,"Computacion");
    Jefe* unEmpleado;
    cout << "---\n" << luis.dameInfoEmpleado();
    cout << "---\n" << luisAlberto.dameInfoJefe();
    pausar();
    /*unEmpleado=&luis;
    cout << "---\nusando referencia de un Empleado:\n";
    cout << "---\n" << unEmpleado->dameInfoEmpleado();*/
    unEmpleado=&luisAlberto;
    cout << "---\nusando referencia de un Jefe:\n";
    cout << "---\n" << unEmpleado->dameInfoEmpleado();
    cout << "---\n" << unEmpleado->dameInfoJefe();
    return 0;
}
