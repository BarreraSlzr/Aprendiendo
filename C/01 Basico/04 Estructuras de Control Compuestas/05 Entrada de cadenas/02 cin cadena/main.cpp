#include <iostream>
#include <string>

#define TAMANO_CADENA 50
//que pasa si descomento esta?
//#define TAMANO_CADENA 5

using namespace std;

int main()
{
    string cadenaSinEspacios;
    char cadenaConEspacios[TAMANO_CADENA];
    char caracter;

    cout << "Dame una cadena sin espacios: ";
    cin >> cadenaSinEspacios;
    cout << "La cadena leida es ***" << cadenaSinEspacios << "***" << endl << endl;
    cout << "presione entrar para continuar" << endl;
    cin.ignore();
    cin.get();

    cout << "Dame una cadena con espacios: ";
    cin.getline(cadenaConEspacios,TAMANO_CADENA);
    cout << "La segunda cadena leida es " << cadenaConEspacios << endl << endl;

    cout << "Ambas cadenas son: " << cadenaSinEspacios << "-" << cadenaConEspacios << endl << endl;

    cout << "presione entrar para continuar" << endl;
    cin.get();
    //getwchar();

    cout << "Dame un caracter: ";
    cin >> caracter;
    //caracter=cin.get();
    cout << "caracter *" << caracter << "*" << endl;
    cin.ignore();
    cout << "presione entrar para continuar" << endl;
    cin.get();

    cout << "Dame otra cadena con espacios" << endl;
    getline(cin,cadenaSinEspacios);
    cout << "string leido es: " << cadenaSinEspacios << endl;
    cout << "presione entrar para terminar" << endl;
    cin.get();

    return 0;
}
