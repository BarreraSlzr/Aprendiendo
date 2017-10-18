#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include <sstream>

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
    bool fijaColorBorde(int c){
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
    bool esIgualA(Circulo* c){
        if (radio>=c->dameRadio() && radio<=c->dameRadio() &&
            colorBorde==c->dameColorBorde() &&
            colorFondo==c->dameColorFondo()){
            return true;
        }
        else{
            return false;
        }
    }
    string dameInfo(){
        stringstream s;
        s << "radio=" << radio;
        s << "; colorBorde=" << colorBorde;
        s << "; colorFondo=" << colorFondo;
        return s.str();
    }
};

#endif // CIRCULO_H_INCLUDED
