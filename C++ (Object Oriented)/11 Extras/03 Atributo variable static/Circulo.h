#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

using namespace std;

class Circulo{
private:
    double radio;
    int colorBorde;
    int colorFondo;
    int id;
    static int cuentaID;
public:
    static constexpr double PI=3.1416;
    Circulo(double radio,int colorBorde,int colorFondo){
        id=++cuentaID;
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
        if (r>=0){
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
    int dameID(){
        return id;
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
    bool esIgualA(Circulo& c){
        if (radio>=c.dameRadio() && radio<=c.dameRadio() &&
            colorBorde==c.dameColorBorde() &&
            colorFondo==c.dameColorFondo()){
            return true;
        }
        else{
            return false;
        }
    }
};

int Circulo::cuentaID=0;

#endif // CIRCULO_H_INCLUDED
