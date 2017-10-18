#include <iostream>
#include <cstdlib>
#include <fstream>
#include <sstream>

#define MAX_ALUMNOS 3
#define SALTO_DE_LINEA "\r\n"
#define NOMBRE_ARCHIVO_ALUMNOS "Alumno.txt"
#define SEPARADOR_CAMPOS ","

using namespace std;

struct Alumno{
    string nombre;
    int codigo;
};

Alumno alumnos[MAX_ALUMNOS];
int cuentaAlumnos;

void pausa(){
    cout << "Presiona enter para continuar . . ." << endl;
    cin.get();
}

bool registrarAlumno(){
    cout << "Registro de Alumno" << endl;
    if (cuentaAlumnos<MAX_ALUMNOS){
        cout << "Registro #" << cuentaAlumnos+1 << "." << endl;
        cout << "Dame el codigo: ";
        cin >> alumnos[cuentaAlumnos].codigo;
        cout << "Dame el nombre: ";
        cin >> alumnos[cuentaAlumnos++].nombre;
        return true;
    }
    else{
        cout << "No hay mas espacio para captura" << endl;
        return false;
    }
}

void guardarAlumnos(){
    ofstream archivo;
    cout << "Guardando archivo " << NOMBRE_ARCHIVO_ALUMNOS << "...";
    archivo.open(NOMBRE_ARCHIVO_ALUMNOS,ios::out);
    if (archivo.is_open()){
        archivo << cuentaAlumnos << SEPARADOR_CAMPOS << "Total" << endl;
        for(int i=0;i<cuentaAlumnos;i++){
            archivo << alumnos[i].nombre << SEPARADOR_CAMPOS
                << alumnos[i].codigo << endl;
        }
        archivo.close();
        cout << "Hecho." << endl;
    }
    else{
        cout << "No se pudo abrir el archivo." << endl;
    }
}

bool cargarAlumnos(){
    ifstream archivo;
    string cadena,subcadena;
    int pos;

    cout << "Cargando archivo " << NOMBRE_ARCHIVO_ALUMNOS << "..." << endl;
    archivo.open(NOMBRE_ARCHIVO_ALUMNOS,ios::in);
    if (archivo.is_open()){
        archivo >> cuentaAlumnos;
        archivo >> cadena;//para leer de la coma en adelante
        for(int i=0;i<cuentaAlumnos;i++){
            stringstream ss;
            archivo >> cadena;
            cout << "Registro leido: " << cadena << endl;
            pos=cadena.find_first_of(SEPARADOR_CAMPOS,0);
            alumnos[i].nombre=subcadena=cadena.substr(0,pos);
            cout << "nombre: " << subcadena << endl;
            subcadena=cadena.substr(pos+1,cadena.length());
            cout << "codigo: " << subcadena << endl;
            ss << subcadena;
            ss >> alumnos[i].codigo;
        }
        cout << "Hecho" << endl;
        archivo.close();
        return true;
    }
    else{
        cout << "No se pudo abrir el archivo." << endl;
        return false;
    }
}

void listarAlumnos(){
    cout << "Lista de Alumnos" << endl;
    for(int i=0;i<cuentaAlumnos;i++){
        cout << alumnos[i].codigo << "\t" << alumnos[i].nombre << endl;
    }
}

int main()
{
    cout << "Lectura y Escritura de Archivos de Texto" << endl;
    if (cargarAlumnos()){
        listarAlumnos();
    }
    if (registrarAlumno()){
        guardarAlumnos();
    }
    return EXIT_SUCCESS;
}
