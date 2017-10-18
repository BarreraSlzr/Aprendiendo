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
    //evitar comparar banderas contra constante numerica o simbolica
    if (mesValido==true){//rebusnancia, true es una constante simbolica
        cout  << "es un mes valido" << endl;
    }
    else{
        cout << "mes no valido" << endl;
    }
    return 0;
}
