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
    Empleado(string nombre,int edad){
        this->nombre = nombre;
        this->edad = edad;
        this->salario=SALARIO_BASE;
    }
    Empleado(string nombre,double salario){
        this->nombre = nombre;
        this->edad = EDAD_MINIMA;
        this->salario=salario;
    }
    Empleado(string nombre){
        this->nombre = nombre;
        this->edad = EDAD_MINIMA;
        this->salario=SALARIO_BASE;
    }
    void fijaDatos(string nombre){
        this->nombre=nombre;
    }
    void fijaDatos(string nombre,int edad){
        this->nombre=nombre;//inapropiado por futura validacion en atributo nombre
        this->edad=edad;
    }
    void fijaDatos(string nombre,int edad,float salario){
        this->nombre=nombre;//inapropiado por futura validacion en atributo nombre
        this->edad=edad;    //inapropiado por futura validacion en atributo edad
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
