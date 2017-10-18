#include <iostream>
#include <sstream>
#include "Empleado.h"
#include "util.h"

using namespace std;

int main()
{
    cout << "--- Instanciando ---" << endl;
    Empleado luis("Luis");
    Empleado alberto("Alberto",20000.0);
    Empleado alex("Alex",18);
    Empleado luisAlberto("Luis Alberto",29,30000);
    cout << luis.dameInfo();
    cout << alberto.dameInfo();
    cout << alex.dameInfo();
    cout << luisAlberto.dameInfo();
    pausar();
    luisAlberto.fijaDatos("Luis Alberto Munoz");
    cout << luisAlberto.dameInfo();
    pausar();
    luisAlberto.fijaDatos("Luis Alberto Munoz G",30);
    cout << luisAlberto.dameInfo();
    pausar();
    luisAlberto.fijaDatos("Luis Alberto Munoz Gomez",31,40000);
    cout << luisAlberto.dameInfo();
    pausar();
    return 0;
}
