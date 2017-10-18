#include <iostream>

using namespace std;

struct Profe{
    int codigo;
    string nombre;
};

int main()
{
    Profe* listaProfesores;
    int cantidad,i;

    cout << "Tiempo dinamico" << endl;

    cout << "Tamaño de variable cantidad " << sizeof(cantidad) << endl;
    cout << "Tamaño de struct Profe " << sizeof(Profe) << endl;

    cout << endl << "Cuantos profesores voy a tener?";
    cin >> cantidad;
    listaProfesores=new Profe[cantidad];
    for(i=0;i<cantidad;i++){
        cout << "dame codigo del " << i+1 << "o.: ";
        cin >> listaProfesores[i].codigo;
        cout << "dame nombre del " << i+1 << "o.: ";
        cin >> listaProfesores[i].nombre;
    }

    cout << endl << "Imprimiendo registros" << endl;
    for(i=0;i<cantidad;i++){
        cout << "codigo del " << i+1 << "o. es " << listaProfesores[i].codigo << endl;
        cout << "nombre del " << i+1 << "o. es " << listaProfesores[i].nombre << endl;
    }

    cout << endl << "Borrando registros..." << endl;
    delete[] listaProfesores;
    return 0;
}
