#include <iostream>
#include <string.h>

using namespace std;

class Circulo{
private:
    double radio;
    int colorBorde;
    int colorFondo;
public:
    static constexpr double PI=3.1416;
    Circulo(double radio,int colorBorde,int colorFondo){
        if (!fijaRadio(radio)){
            this->radio=10;//valor por defecto
        }
        if (!fijaColorBorde(colorBorde)){
            this->colorBorde=14;
        }
        if (!fijaColorFondo(colorFondo)){
            this->colorFondo=9;
        }
    }
    bool fijaRadio(double r){
        if (r>0){
            radio=r;
            return true;
        }
        else{
            return false;
        }
    }
    bool fijaColorBorde(int c){//antes se llamaba colorCircunferenciax
        if (c>=0){
            colorBorde=c;
            return true;
        }
        else{
            return false;
        }
    }
    bool fijaColorFondo(int c){
        if (c>=0){
            colorFondo=c;
            return true;
        }
        else{
            return false;
        }
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
    void dibujar(){
        cout << "Dibujando circulo" << endl;
    }
    void trasladar(){
        cout << "Trasladando circulo" << endl;
    }
    void redimensionar(int porcentaje){
        cout << "Redimensionando en " << porcentaje << "%" << endl;
    }
};

void imprimeCirculo(Circulo c);

int main()
{
    Circulo c1(-5,14,9);
    Circulo c2(20,14,9);
    //Circulo c3;//no compila

    cout << "Propiedades del circulo c1:" << endl;
    imprimeCirculo(c1);
    c1.dibujar();
    c1.trasladar();
    c1.redimensionar(200);
    cout << endl << endl;

    cout << "Propiedades del circulo c2:" << endl;
    imprimeCirculo(c2);
    c2.dibujar();
    c2.trasladar();
    c2.redimensionar(400);
    return 0;
}

void imprimeCirculo(Circulo c){//paso de parametro por valor
    cout << "radio=" << c.dameRadio() << endl;
    cout << "colorBorde=" << c.dameColorBorde() << endl;
    cout << "colorFondo=" << c.dameColorFondo() << endl;
    cout << "area=" << c.dameArea() << endl << endl;
}
