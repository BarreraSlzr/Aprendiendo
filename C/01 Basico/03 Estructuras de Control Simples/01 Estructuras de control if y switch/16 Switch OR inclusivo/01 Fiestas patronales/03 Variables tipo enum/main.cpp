#include <iostream>

typedef enum {LUNES=1,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO} diaDeLaSemana;

using namespace std;

int main()
{
    diaDeLaSemana dia;
    cout << "Elige el dia de la semana (1 a 7) que llegaras: ";
    dia=LUNES;
    //dia=MARTES;
    cout << endl << "Lo que te toca ver es:" << endl;
    switch(dia){
    case LUNES:
        cout << "Procesion por la calle principal" << endl;
    case MARTES:
        cout << "Recibir a los hijos que se fueron" << endl;
    case MIERCOLES:
        cout << "Subir al cerro de la cruz y rezar" << endl;
    case JUEVES:
        cout << "Desfile de expulsion de los demonios" << endl;
    case VIERNES:
        cout << "Ir a la barranca a romper cantaros" << endl;
    case SABADO:
        cout << "Desfile de mojigangas" << endl;
    case DOMINGO:
        cout << "Lanzamiento de globos" << endl;
        break;//que pasa si descomentas esta linea?
    default:
        cout << "Dia no conocido" << endl;
    }
    cout << endl << "Luego, Regresa a casa" << endl;
    return 0;
}
