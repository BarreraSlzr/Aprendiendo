#include <iostream>
#include <cstdio>

#define TOTAL_MESES 12

using namespace std;

int main()
{
    string meses[TOTAL_MESES];
    int i,mes;
    string febrero="Febrero";

    cout << febrero << endl << endl;
    cout << "presione entrar para continuar" << endl;
    cin.get();

    meses[0]="Enero";
    meses[1]="Febrero";
    meses[2]="Marzo";
    meses[3]="Abril";
    meses[4]="Mayo";
    meses[5]="Junio";
    meses[6]="Julio";
    meses[7]="Agosto";
    meses[8]="Septiembre";
    meses[9]="Octubre";
    meses[10]="Noviembre";
    meses[11]="Diciembre";

    for(i=0;i<TOTAL_MESES;i++){
        cout << meses[i] << endl;
    }

    cout << "presione entrar para continuar" << endl;
    cin.get();

    mes=8;
    cout << "el mes es " << meses[mes] << endl;

    return 0;
}
