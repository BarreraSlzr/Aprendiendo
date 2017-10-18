#include <iostream>
#include <cstdlib>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

typedef enum {SUMA=1,RESTA,MULTIPLICACION,DIVISION,POTENCIA,SALIR} opcionMenu;

using namespace std;

int main()
{
    int opc;
    int a,b,i,base,exponente,resultado;
    do{
        system(CLEAR);
        cout << "Calculadora" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "5. Potencia" << endl;
        cout << "6. Salir" << endl;
        cout << "Dame la opcion: ";
        cin >> opc;
        switch(opc){
        case SUMA:
            cout << "Elegiste la suma" << endl;
            cout << "Dame a: ";
            cin >> a;
            cout << "Dame b: ";
            cin >> b;
            resultado=a+b;
            cout << "El resultado es: " << resultado << endl;
            break;
        case RESTA:
            cout << "Elegiste la resta" << endl;
            cout << "Dame a: ";
            cin >> a;
            cout << "Dame b: ";
            cin >> b;
            resultado=a-b;
            cout << "El resultado es: " << resultado << endl;
            break;
        case MULTIPLICACION:
            cout << "Elegiste la multiplicacion" << endl;
            cout << "Dame a: ";
            cin >> a;
            cout << "Dame b: ";
            cin >> b;
            resultado=a*b;
            cout << "El resultado es: " << resultado << endl;
            break;
        case DIVISION:
            cout << "Elegiste la division" << endl;
            cout << "Dame a: ";
            cin >> a;
            cout << "Dame b: ";
            cin >> b;
            resultado=a/b;
            cout << "El resultado es: " << resultado << endl;
            break;
        case POTENCIA:
            cout << "Elegiste la potencia" << endl;
            cout << "Dame base: ";
            cin >> base;
            cout << "Dame exponente: ";
            cin >> exponente;
            resultado=1;
            for(i=0;i<exponente;i++){
                resultado*=base;
            }
            cout << base << " a la " << exponente << " es " << resultado << endl;
            break;
        case SALIR:
            cout << "Elegiste salir" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
        }
        cin.get();
        cout << "Presiona entrar para continuar..." << endl;
        cin.get();
    }
    while(opc!=SALIR);
    return 0;
}
