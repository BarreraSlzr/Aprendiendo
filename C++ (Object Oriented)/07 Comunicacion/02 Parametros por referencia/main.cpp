#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Circulo{
    double radio;
    int colorBorde;
    int colorFondo;
public:
    static constexpr float PI=3.1416;
    void fijaRadio(double radio){
        this->radio=radio;
    }
    void fijaColorBorde(int colorBorde){
        this->colorBorde=colorBorde;
    }
    void fijaColorFondo(int colorFondo){
        this->colorFondo=colorFondo;
    }
    double dameRadio(){
        cout << "invocandose dameRadio()" << endl; //que pasa si descomento esto?
        return radio;
    }
    int dameColorBorde(){
        cout << "invocandose dameColorBorde()" << endl; //que pasa si descomento esto?
        return colorBorde;
    }
    int dameColorFondo(){
        cout << "invocandose dameColorFondo()" << endl; //que pasa si descomento esto?
        return colorFondo;
    }
    float dameArea(){
        return PI*radio*radio;
    }
    bool esIgualA(Circulo* c){
        if (this->radio>=c->dameRadio() && this->radio<=c->dameRadio() &&
            this->colorBorde==c->dameColorBorde() &&
            this->colorFondo==c->dameColorFondo()){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Circulo c1,c2,c3;
    c1.fijaRadio(10);
    c1.fijaColorBorde(11);
    c1.fijaColorFondo(14);
    c2.fijaRadio(10);
    c2.fijaColorBorde(11);
    c2.fijaColorFondo(14);
    c3.fijaRadio(12);
    c3.fijaColorBorde(11);
    c3.fijaColorFondo(14);
    if (c1.esIgualA(&c2)){
        cout << "c1 y c2 son iguales" << endl;
    }
    else{
        cout << "c1 y c2 son diferentes" << endl;
    }
    if (c1.esIgualA(&c3)){
        cout << "c1 y c3 son iguales" << endl;
    }
    else{
        cout << "c1 y c3 son diferentes" << endl;
    }
    return 0;
}
