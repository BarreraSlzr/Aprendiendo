#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Circulo{ //como registro
public://que pasa si comento esta?
    double radio;
    int colorBorde;
    int colorFondo;
};

int main()
{
    Circulo c;
    c.radio=10;
    //c.radio=-5;  //es esto admisible?
    c.colorBorde=11;
    c.colorFondo=14;
    cout << "radio es " << c.radio << endl;
    cout << "colorBorde es " << c.colorBorde << endl;
    cout << "colorFondo es " << c.colorFondo << endl;
    return 0;
}
