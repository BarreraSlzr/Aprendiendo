#include <iostream>

using namespace std;

int main()
{
    string cadenaConEspacios;

    cout << "Dame una cadena con espacios: ";
    getline(cin,cadenaConEspacios);
    cout << "La cadena leida es ***" << cadenaConEspacios << "***" << endl << endl;

    //aqui no es necesario cin.get()
    cout << "presione entrar para continuar" << endl;
    cin.get();
    return 0;
}
