#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Circulo{
    static constexpr float PI=3.1416;
    double radio;//atributos pasivos
    int colorBorde;//ocultamiento de informacion
    int colorFondo;
public:
    void fijaRadio(double radiox){//atributo activo o metodo
        radio=radiox;
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
    double dameArea(){//devuelve un atributo derivado
        return PI*radio*radio;
    }
};

int main()
{
    Circulo c;
    //c.radio=10;//no compila por ocultamiento de informacion
    c.fijaRadio(10);
    c.fijaColorBorde(11);
    c.fijaColorFondo(14);
    cout << "radio es " << c.dameRadio() << endl;
    cout << "colorBorde es " << c.dameColorBorde() << endl;
    cout << "colorFondo es " << c.dameColorFondo() << endl;
    cout << "area es " << c.dameArea() << endl;
    return 0;
}
