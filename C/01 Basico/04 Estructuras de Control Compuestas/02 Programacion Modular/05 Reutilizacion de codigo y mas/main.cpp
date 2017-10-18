#include <iostream>
#include <cstdlib>

#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

typedef enum {SUMA=1,RESTA,MULTIPLICACION,DIVISION,POTENCIA,VARIAS,SALIR} opcionesMenu;

/*Listado de prototipos de subprogramas
  sirven para que desde el principio, el compilador conozca los nombres de los
  subprogramas que habrán de definirse posteriormente, así como el tipo de valores
  que regresan las funciones
*/
int menuPrincipal();//declaracion de la subrutina
int suma(int a,int b);
void hacerSuma();
void restar(int minuendo,int sustraendo);
void hacerResta();
void hacerMultiplicacion();
int division(int dividendo,int divisor);
void hacerDivision();
int potencia(int base,int exponente);
void hacerPotencia();
void pausa();
void hacerVarias();

using namespace std;

int main()//Programa Principal
{
    int opc;
    do{
        switch(opc=menuPrincipal()){
        case SUMA:
            hacerSuma();
            break;
        case RESTA:
            hacerResta();
            break;
        case MULTIPLICACION:
            hacerMultiplicacion();
            break;
        case DIVISION:
            hacerDivision();
            break;
        case POTENCIA:
            hacerPotencia();
            break;
        case VARIAS:
            hacerVarias();
            break;
        case SALIR:
            cout << "Bye bye =)" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
        }
        pausa();
    }while(opc!=SALIR);
    return 0;
}

//**********Definición de código para subprogramas**********

int menuPrincipal(){//funcion sin parametros
    int opc;
    system(CLEAR);
    cout << "Calculadora" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Potencia" << endl;
    cout << "6. Varias" << endl;
    cout << "7. Salir" << endl;
    cout << "Dame la opcion: ";
    cin >> opc;
    return opc;
}

int suma(int a,int b){//subrutina funcion por devolver valor
    int c;//variable local
    c=a+b;
    return c;
}

void hacerSuma(){//subrutina procedimiento por no devolver valor
    int a,b,resultado;//variables locales
    cout << "Elegiste la suma" << endl;
    cout << "Dame a: ";
    cin >> a;
    cout << "Dame b: ";
    cin >> b;
    resultado=suma(a,b);
    cout << "El resultado es: " << resultado << endl;
}

void restar(int minuendo,int sustraendo){//procedimiento con parametros
    int resultado;
    resultado=minuendo-sustraendo;
    cout << "El resultado es: " << resultado << endl;
}

void hacerResta(){//procedimiento sin parametros
    int a,b;
    cout << "Elegiste la resta" << endl;
    cout << "Dame a: ";
    cin >> a;
    cout << "Dame b: ";
    cin >> b;
    restar(a,b);
}

void hacerMultiplicacion(){//subrutina o subprograma
    int a,b,resultado;
    cout << "Elegiste la multiplicacion" << endl;
    cout << "Dame a: ";
    cin >> a;
    cout << "Dame b: ";
    cin >> b;
    resultado=a*b;
    cout << "El resultado es: " << resultado << endl;
}

int division(int dividendo,int divisor){//funcion con parametros
    return dividendo/divisor;
}

void hacerDivision(){//subrutina o subprograma
    int a,b,resultado;
    cout << "Elegiste la division" << endl;
    cout << "Dame a: ";
    cin >> a;
    cout << "Dame b: ";
    cin >> b;
    resultado=division(a,b);
    cout << "El resultado es: " << resultado << endl;
}

int potencia(int base,int exponente){//funcion con parametros
    int resultado,i;
    resultado=1;
    for(i=0;i<exponente;i++){
        resultado*=base;
    }
    return resultado;
}

void hacerPotencia(){//subrutina o subprograma
    int base,exponente,resultado;
    cout << "Elegiste la potencia" << endl;
    cout << "Dame base: ";
    cin >> base;
    cout << "Dame exponente: ";
    cin >> exponente;
    resultado=potencia(base,exponente);
    cout << base << " a la " << exponente << " es " << resultado << endl;
}

void pausa(){//subrutina o subprograma
    cin.get();
    cout << "Presione entrar para continuar..." << endl;
    cin.get();
}

void hacerVarias(){
    int resultado,a,b;
    resultado=suma(4,7);
    cout << "4 + 7 = " << resultado << endl;

    cout << "9 + 12 = " << suma(9,12) << endl;

    resultado=suma(suma(4,7),suma(9,12));

    cout << "resultado=" << resultado << endl;

    a=2;
    b=3;
    resultado=suma(a,b);
    cout << "primer suma = " << resultado << endl;

    resultado=suma(a,suma(a,b));

    cout << "segunda suma = " << resultado << endl;

    resultado=potencia(a,suma(a,b));


    cout << "potencia de la suma = " << resultado << endl;
}
