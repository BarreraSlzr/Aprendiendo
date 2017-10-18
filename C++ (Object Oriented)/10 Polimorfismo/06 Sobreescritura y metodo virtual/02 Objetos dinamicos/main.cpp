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
    virtual ~Empleado(){//necesario destructor polimorfico
    }
    virtual string dameInfo(){
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
    string dameInfo(){
        return Empleado::dameInfo()+"Departamento:"+departamento+"\n";
    }
};

int main()
{
    Empleado* luis=new Empleado("Luis",31,18000);
    Jefe* luisAlberto=new Jefe("Luis Alberto",32,30000,"Computacion");
    Empleado* unEmpleado;
    Empleado* luisMunoz=new Jefe("Luis Alberto",34,40000,"Computacion");
    cout << "---\n" << luis->dameInfo();
    cout << "---\n" << luisAlberto->dameInfo();
    pausar();
    unEmpleado=luis;
    cout << "---\nusando referencia de un Empleado:\n";
    cout << "---\n" << unEmpleado->dameInfo();
    unEmpleado=luisAlberto;
    cout << "---\nusando referencia de un Jefe:\n";
    cout << "---\n" << unEmpleado->dameInfo();
    pausar();
    cout << "---\nusando referencia de super clase:\n";
    cout << "---\n" << luisMunoz->dameInfo();
    delete luis;
    delete luisAlberto;
    delete luisMunoz;
    //delete unEmpleado;//que pasa si descomentas esta? Ya habias eliminado los 3 unicos objetos
    return 0;
}
