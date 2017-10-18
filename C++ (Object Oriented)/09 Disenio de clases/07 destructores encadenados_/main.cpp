#include <iostream>

#include "Profesor.h"
#include "JefeDepartamento.h"
#include "Empleado.h"//que pasa si comentas esta? pero no lo borres

using namespace std;

int main(){
    Empleado* luis=new Empleado("Luis");
    Profesor* alberto=new Profesor("Alberto",2233517);
    JefeDepartamento* paty=new JefeDepartamento("Patricia","Ciencias Computacionales");
    cout << "Nombre Empleado: " << luis->dameNombre() << endl << endl;
    cout << "Nombre Profesor: " << alberto->dameNombre() << endl;
    cout << "Codigo Profesor: " << alberto->dameCodigo() << endl << endl;
    cout << "Nombre Jefe Departamento: " << paty->dameNombre() << endl;
    cout << "Departamento: " << paty->dameDepartamento() << endl;
    cout << endl;
    //en que orden se ejecutan los destructores a diferencia de los constructores?
    delete luis;
    delete alberto;
    delete paty;
}
