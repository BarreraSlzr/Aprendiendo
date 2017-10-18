#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

class Empleado{
    static constexpr float SALARIO_BASE=10000;//las constantes van al principio
    static constexpr int EDAD_MINIMA=18;
    string nombre;
    int edad;
    double salario;
    int aniosTrabajando;
public:
    Empleado(string nombre, int edad,double salario){
        if (!fijaNombre(nombre)){
            this->nombre="Staff";//asigno Staff? o le quito lo malo al nombre?
            //Dejo la cadena aqui? o le declaro una constante simbolica?
        }
        if (!fijaEdad(edad)){
            this->edad = EDAD_MINIMA;
        }
        if (!fijaSalario(salario)){
            this->salario=SALARIO_BASE;
        }
        fijaAniosTrabajando(0);
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
    bool fijaNombre(string nombre){//solo digo que se acepta? o limpio el nombre?
        //falta validar el nombre
        this->nombre=nombre;
        return true;
    }
    bool fijaEdad(int edad){
        if (edad>=EDAD_MINIMA){
            this->edad=edad;
            return true;
        }
        //else no cambio la edad por no permitir menores de edad
        return false;
    }
    bool fijaSalario(float salario){
        if (salario>=SALARIO_BASE){
            this->salario=salario;
            return true;
        }
        else{//no acepto salario menor al SALARIO_BASE
            return false;
        }
    }
    bool fijaAniosTrabajando(int aniosTrabajando){
        if (aniosTrabajando>=this->aniosTrabajando){
            this->aniosTrabajando=aniosTrabajando;
            return true;
        }
        //else no se permite disminuir antiguedad
        return false;
    }
    bool fijaDatos(string nombre){
        return fijaNombre(nombre);
    }
    bool fijaDatos(string nombre,int edad){
        //fijaDatos(nombre); //o podria llamar a este
        if (fijaNombre(nombre) && fijaEdad(edad)){
            return true;
        }
        else{
            return false;
        }
    }
    bool fijaDatos(int aniosTrabajando,string nombre){
        return fijaNombre(nombre) && fijaAniosTrabajando(aniosTrabajando);
    }
    bool fijaDatos(string nombre,int edad,float salario){
        return fijaDatos(nombre,edad) && fijaSalario(salario);
    }
    bool fijaDatos(string nombre,int edad,float salario,int aniosTrabajando){
        return fijaDatos(nombre,edad,salario) && fijaAniosTrabajando(aniosTrabajando);
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
