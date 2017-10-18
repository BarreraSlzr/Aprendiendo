#include <iostream>
#include "util.h"

#define TAMANO_NOMBRE 25

using namespace std;

typedef struct Profesor{
    int codigo;
    char nombre[TAMANO_NOMBRE];
}Profe;

int main()
{
    Profe** listaProfesores;
    Profe** temp;
    int cantidad,i;

    cout << "Cuantos profesores voy a tener? ";
    cin >> cantidad;
    listaProfesores=new Profe*[cantidad];
    for(i=0;i<cantidad;i++){
        listaProfesores[i]=new Profe;
        cout << "Dame codigo del " << i+1 << ".: ";
        cin >> listaProfesores[i]->codigo;
        cout << "Dame nombre del " << i+1 << ".: ";
        cin >> listaProfesores[i]->nombre;
    }

    cout << endl << "Imprimiendo registros..." << endl;
    for(i=0;i<cantidad;i++){
        cout << "codigo del " << i+1 << "o. es " << listaProfesores[i]->codigo << endl;
        cout << "nombre del " << i+1 << "o. es " << listaProfesores[i]->nombre << endl;
    }
    cout << endl << "Agrandando el arreglo..." << endl;
    temp=new Profe*[cantidad+1];
    for(i=0;i<cantidad;i++){
        temp[i]=listaProfesores[i];
    }
    delete[] listaProfesores;
    listaProfesores=temp;
    listaProfesores[cantidad]=new Profe;
    cout << "Dame codigo del " << cantidad+1 << "o.: ";
    cin >> listaProfesores[cantidad]->codigo;
    cout << "Dame nombre del " << cantidad+1 << "o.: ";
    cin >> listaProfesores[cantidad++]->nombre;
    cout << endl << "Imprimiendo registros..." << endl;
    for(i=0;i<cantidad;i++){
        cout << "codigo del " << i+1 << "o. es " << listaProfesores[i]->codigo << endl;
        cout << "nombre del " << i+1 << "o. es " << listaProfesores[i]->nombre << endl;
    }
    cout << "borrando registros..." << endl;
    pausa("Presione entrar para terminar . . .");
    for(i=0;i<cantidad;i++){
        delete listaProfesores[i];
    }
    delete[] listaProfesores;
    listaProfesores=NULL;//si fuera una variable global
    temp=NULL;
    return 0;
}
