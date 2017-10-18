#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

class Empleado{
    static constexpr float SALARIO_BASE=10000;
    static constexpr int EDAD_MINIMA=18;
    string nombre;
    int edad;
    double salario;
    int aniosTrabajando;
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
    Empleado():
        Empleado("Staff"){
    }
    void fijaNombre(string nombre){
        //falta validar el nombre
        this->nombre=nombre;
    }
    void fijaEdad(int edad){
        if (edad>=EDAD_MINIMA){
            this->edad=edad;
        }
        //else no cambio la edad por no permitir menores de edad
    }
    void fijaSalario(float salario){
        if (salario>=SALARIO_BASE){
            this->salario=salario;
        }
        //else no acepto salario menor al SALARIO_BASE
    }
    void fijaAniosTrabajando(int aniosTrabajando){
        if (aniosTrabajando>=this->aniosTrabajando){
            this->aniosTrabajando=aniosTrabajando;
        }
        //else no se permite disminuir antiguedad
    }
    void fijaDatos(string nombre){
        fijaNombre(nombre);
    }
    void fijaDatos(string nombre,int edad){
        fijaNombre(nombre);
        //fijaDatos(nombre); //o podria llamar a este
        fijaEdad(edad);
    }
    void fijaDatos(int aniosTrabajando,string nombre){
        fijaNombre(nombre);
        fijaAniosTrabajando(aniosTrabajando);
    }
    void fijaDatos(string nombre,int edad,float salario){
        fijaDatos(nombre,edad);
        fijaSalario(salario);
    }
    void fijaDatos(string nombre,int edad,float salario,int aniosTrabajando){
        fijaDatos(nombre,edad,salario);
        fijaAniosTrabajando(aniosTrabajando);
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
