#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include <sstream>

using namespace std;

class Empleado{
    static constexpr float SALARIO_BASE=10000;
    static constexpr int EDAD_MINIMA=18;
    string nombre;
    int edad;
    double salario;
public:
    Empleado(string nombre, int edad,double salario){
        this->nombre = nombre;
        this->edad = edad;
        this->salario=salario;
    }
    Empleado(string nombre,int edad):
        Empleado(nombre,edad,SALARIO_BASE){
    }
    Empleado(string nombre,double salario):
        Empleado(nombre,EDAD_MINIMA,salario){
    }
    Empleado(string nombre):
        Empleado(nombre,SALARIO_BASE){
    }
    void fijaDatos(string nombre){
        this->nombre=nombre;
    }
    void fijaDatos(string nombre,int edad){
        fijaDatos(nombre);
        if (edad>=EDAD_MINIMA){
            this->edad=edad;
        }
        //else no cambio la edad por no permitir menores de edad
    }
    void fijaDatos(string nombre,int edad,float salario){
        fijaDatos(nombre,edad);
        this->salario=salario;
    }
    string dameInfo(){
        stringstream s;
        s << "---Datos del empleado---" << endl;
        s << "Nombre:" << nombre << endl;
        s << "Edad:" << edad << endl;
        s << "Salario:" << salario << endl;
        return s.str();
    }
};

#endif // EMPLEADO_H_INCLUDED
