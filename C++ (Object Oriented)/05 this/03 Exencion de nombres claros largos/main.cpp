#include <iostream>

using namespace std;

class Circulo{
private:
    static constexpr double PI=3.1416;
    double radio;
    int colorBorde;
    int colorFondo;
public:
    Circulo(){
        //datos por defecto
        radio=10;
        colorBorde=14;
        colorFondo=11;
    }
    bool fijaRadio(double r){
        if (r>0){
            radio=r;
            return true;
        }
        else{//else no se admiten circulos de radio negativo
            return false;
        }
    }
    bool fijaColorBorde(int c){//antes se llamaba colorBorde
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
    double radio;
    cout << "Datos al principio:" << endl;
    imprimeCirculo(c);
    cout << "Dame el nuevo radio: ";
    cin >> radio;
    if (c.fijaRadio(radio)){
        cout << "Datos despues de intentar radio cambiado:" << endl;
    }
    else{
        cout << "No se dejo cambiar el radio" << endl;
    }
    imprimeCirculo(c);
    return 0;
}
