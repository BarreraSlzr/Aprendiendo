#include <iostream>

#define ENERO 1
#define DICIEMBRE 12

using namespace std;

int main()
{
    int mes;
    bool mesValido;//bandera
    cout << "dame un numero de mes:";
    cin >> mes;
    mesValido=(ENERO<=mes)&&(mes<=DICIEMBRE);
    if (!mesValido){
        cout << "mes no valido" << endl;
    }
    else{
        cout  << "es un mes valido" << endl;
    }
    return 0;
}
