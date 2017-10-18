#include <iostream>
#include "AdminCirculos.h"
#include "Circulo.h"

using namespace std;

int main()
{
    AdminCirculos* adminCirculos;
    int veces=0,memoriaAsignada,tamanioAdmin;
    try{
        while(1){
            veces++;
            //cout << veces << endl;
            adminCirculos=new AdminCirculos;
        }
    }catch(bad_alloc& e){//o bien exception& e
        cout << "Ya no se pudo crear mas objetos" << endl;
    }
    cout << "veces= " << veces << endl;
    cout << "tamanio de AdminCirculos es: " << (tamanioAdmin=sizeof(AdminCirculos))
        << endl;
    memoriaAsignada=veces*tamanioAdmin;
    cout << "memoria en uso es: " << memoriaAsignada << endl;
    return 0;
}
