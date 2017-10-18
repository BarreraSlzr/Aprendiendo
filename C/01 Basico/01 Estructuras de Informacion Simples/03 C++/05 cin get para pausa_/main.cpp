#include <iostream>

using namespace std;

int main()
{
    string cadenaSinEspacios;

    cout << "Dame una cadena sin espacios: ";
    cin >> cadenaSinEspacios;
    cout << "La cadena leida es ***" << cadenaSinEspacios << "***" << endl << endl;

    cin.get();//que pasa si comento esta?
    cout << "presione entrar para continuar" << endl;
    cin.get();
    return 0;
}
