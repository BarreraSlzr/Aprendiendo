#include <iostream>
#include <string.h>

using namespace std;

class Circulo{
private://sin este modificador de acceso, es asi por defecto
    static constexpr double PI=3.1416;
    double radio;
    int colorBorde;
    int colorFondo;
public://modificador de acceso
    Circulo(){//Constructor
        radio=10;
        colorBorde=14;
        colorFondo=11;
    }
    void fijaRadio(double radiox){
        if (radiox>0){
            radio=radiox;
        }
    }
    void fijaColorBorde(int colorBordex){
        colorBorde=colorBordex;
    }
    void fijaColorFondo(int colorFondox){
        colorFondo=colorFondox;
    }
    double dameRadio(){
        return radio;
    }
    int dameColorBorde(){
        return colorBorde;
    }
    int dameColorFondo(){
        return colorFondo;
    }
    double dameArea(){
        return PI*radio*radio;
    }
};

void imprimeCirculo(Circulo c){
    cout << "Propiedades del circulo c:" << endl;
    cout << "radio=" << c.dameRadio() << endl;
    cout << "colorBorde=" << c.dameColorBorde() << endl;
    cout << "colorFondo=" << c.dameColorFondo() << endl;
    cout << "area=" << c.dameArea() << endl << endl;
}

int main()
{
    Circulo c;
    cout << "Datos al principio:" << endl;
    imprimeCirculo(c);

    c.fijaRadio(-5);
    cout << "Datos despues de intentar radio negativo:" << endl;
    imprimeCirculo(c);

    c.fijaRadio(20);
    cout << "Datos despues de intentar con radio positivo:" << endl;
    imprimeCirculo(c);
    return 0;
}
