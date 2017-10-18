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
    string dameNombre(){
        return nombre;
    }
    int dameEdad(){
        return edad;
    }
    double dameSalario(){
        return salario;
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
    string dameDepartamento(){
        return departamento;
    }
    string dameInfoJefe(){
        return dameInfoEmpleado()+"Departamento:"+departamento+"\n";
    }
};

int main()
{
    Empleado luis("Luis",31,18000);
    Jefe luisAlberto("Luis Alberto",32,30000,"Computacion");
    cout << "---\n" << luis.dameInfoEmpleado();
    cout << "\n" << luisAlberto.dameInfoJefe();
    cout << "\nNombre de luis:" << luis.dameNombre();
    cout << "\nEdad de luis:" << luis.dameEdad();
    cout << "\nSalario de luis:" << luis.dameSalario();
    cout << "\nNombre de luisAlberto:" << luisAlberto.dameNombre();
    cout << "\nEdad de luisAlberto:" << luisAlberto.dameEdad();
    cout << "\nSalario de luisAlberto:" << luisAlberto.dameSalario();
    cout << "\nDepartamento de luisAlberto:" << luisAlberto.dameDepartamento();
    return 0;
}
