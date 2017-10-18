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
        this->radio=10;
        this->colorBorde=14;
        this->colorFondo=11;
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
};

void imprimeCirculo(Circulo c);
Circulo capturaDatosCirculo();

int main()
{
    Circulo c;
    c=capturaDatosCirculo();//se recibe copia del circulo
    cout << endl << "Circulo recibido" << endl;
    imprimeCirculo(c);
    return 0;
}

void imprimeCirculo(Circulo c){
    cout << "Propiedades del circulo:" << endl;
    cout << "radio=" << c.dameRadio() << endl;
    cout << "colorBorde=" << c.dameColorBorde() << endl;
    cout << "colorFondo=" << c.dameColorFondo() << endl;
    cout << "area=" << c.dameArea() << endl << endl;
}

Circulo capturaDatosCirculo(){
    Circulo c;//variable local y desaparece al terminar la subrutina
    double radio;
    int colorBorde;
    int colorFondo;
    cout << "Datos por defecto" << endl;
    imprimeCirculo(c);
    cout << "Dame el radio: ";
    cin >> radio;
    cout << "Dame el colorBorde: ";
    cin >> colorBorde;
    cout << "Dame el colorFondo: ";
    cin >> colorFondo;
    cout << endl << "Datos cambiados" << endl;
    c.fijaRadio(radio);
    c.fijaColorBorde(colorBorde);
    c.fijaColorFondo(colorFondo);
    imprimeCirculo(c);
    return c;//antes de desaparecer se copia afuera todo su contenido
}

