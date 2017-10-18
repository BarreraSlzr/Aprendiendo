#include <iostream>
#include <string.h>

using namespace std;

#define PI 3.1416

class Circulo{
public:
    float radio;
    int colorBorde;
    int colorFondo;
    float area;//sera apropiado este atributo, pues se puede calcular?
};

int main()
{
    Circulo c;
    c.radio=10;
    c.colorBorde=14;
    c.colorFondo=9;
    c.area=PI*c.radio*c.radio;

    cout << "Propiedades del circulo c:" << endl;
    cout << "radio=" << c.radio << endl;
    cout << "colorBorde=" << c.colorBorde << endl;
    cout << "colorFondo=" << c.colorFondo << endl;
    cout << "area=" << c.area << endl;
    return 0;
}
