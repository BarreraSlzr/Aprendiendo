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
        info << "Nombre:" << nombre << "\nEdad:" << edad <<
            "\nSalario:" << salario <<
            "\nFechaNacimiento:" << fechaNacimiento.anio << "/" <<
            fechaNacimiento.mes << "/" << fechaNacimiento.dia << "\n";
        s=info.str();
        return s;
    }

    /*string dameInfoEmpleado(){
        stringstream info;
        info << "Nombre:" << nombre << "\nEdad:" << edad <<
            "\nSalario:" << salario <<
            "\nFechaNacimiento:" << fechaNacimiento.anio << "/" <<
            fechaNacimiento.mes << "/" << fechaNacimiento.dia << "\n";
        return info.str();//me ahorro una variable
    }*/

    string doubleToString(double d){
        stringstream ss;
        ss << d;
        return ss.str();
    }

    string intToString(int t){
        stringstream ss;
        ss << t;
        return ss.str();
    }

    /*string dameInfoEmpleado(){
        string info; //ahora de tipo string
        info="Nombre:" + nombre;
        info+="\nEdad:";
        info+=intToString(edad);
        info+="\nSalario:"+doubleToString(salario);
        info+="\nFechaNacimiento:" + intToString(fechaNacimiento.anio);
        info+="/" + intToString(fechaNacimiento.mes);
        info+="/" + intToString(fechaNacimiento.dia);
        //info+="/" + fechaNacimiento.dia; //en Java si funciona asi
        info+="\n";
        return info;
    }*/
};

int main()
{
    Empleado luis("Luis",31,18000);
    cout << "---\n" << luis.dameInfoEmpleado();
    return 0;
}
