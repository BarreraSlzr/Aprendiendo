#include <iostream>
#include "util.h"

using namespace std;

struct Profe{
    int codigo;
    string nombre;
};

int main()
{
    Profe* listaProfesores;
    Profe* temp;
    int cantidad,i;

    cout << "Cuantos profesores voy a tener? ";
    cin >> cantidad;
    listaProfesores=new Profe[cantidad];
    for(i=0;i<cantidad;i++){
        cout << "Dame codigo del " << i+1 << ".: ";
        cin >> listaProfesores[i].codigo;
        cout << "Dame nombre del " << i+1 << ".: ";
        cin >> listaProfesores[i].nombre;
    }

    cout << endl << "Imprimiendo registros..." << endl;
    for(i=0;i<cantidad;i++){
        cout << "codigo del " << i+1 << "o. es " << listaProfesores[i].codigo << endl;
        cout << "nombre del " << i+1 << "o. es " << listaProfesores[i].nombre << endl;
    }
    cout << endl << "Agrandando el arreglo..." << endl;
    temp=new Profe[cantidad+1];
    for(i=0;i<cantidad;i++){
        temp[i]=listaProfesores[i];
    }
    delete[] listaProfesores;
    listaProfesores=temp;
    cout << "Dame codigo del " << cantidad+1 << "o.: ";
    cin >> listaProfesores[cantidad].codigo;
    cout << "Dame nombre del " << cantidad+1 << "o.: ";
    cin >> listaProfesores[cantidad++].nombre;
    cout << endl << "Imprimiendo registros..." << endl;
    for(i=0;i<cantidad;i++){
        cout << "codigo del " << i+1 << "o. es " << listaProfesores[i].codigo << endl;
        cout << "nombre del " << i+1 << "o. es " << listaProfesores[i].nombre << endl;
    }
    cout << "borrando registros..." << endl;
    pausa("Presione entrar para terminar . . .");
    delete[] listaProfesores;
    listaProfesores=NULL;
    return 0;
}
