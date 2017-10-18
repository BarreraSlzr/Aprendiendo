#include <iostream>

using namespace std;

class Circulo{
private:
    double radio;
    int colorBorde;
    int colorFondo;
public:
    static constexpr double PI=3.1416;
    Circulo(double radio,int colorBorde,int colorFondo){
        //datos por defecto
        this->radio=10;
        this->colorBorde=14;
        this->colorFondo=11;
        fijaRadio(radio);
        fijaColorBorde(colorBorde);
        fijaColorFondo(colorFondo);
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

void imprimeCirculo(Circulo* c);
Circulo* capturaDatosCirculo();

int main()
{
    Circulo* c;
    cout << "Usando PI valiendo " << Circulo::PI << endl;
    c=capturaDatosCirculo();//se recibe copia de la referencia al circulo
    cout << endl << "Circulo recibido" << endl;
    imprimeCirculo(c);
    //donde pongo el delete?
    delete c;
    return 0;
}

void imprimeCirculo(Circulo* c){
    cout << "Propiedades del circulo:" << endl;
    cout << "radio=" << c->dameRadio() << endl;
    cout << "colorBorde=" << c->dameColorBorde() << endl;
    cout << "colorFondo=" << c->dameColorFondo() << endl;
    cout << "area=" << c->dameArea() << endl << endl;
}

Circulo* capturaDatosCirculo(){
    Circulo* c;//referencia a un futuro circulo
    double radio;
    int colorBorde;
    int colorFondo;
    cout << "Dame el radio: ";
    cin >> radio;
    cout << "Dame el colorBorde: ";
    cin >> colorBorde;
    cout << "Dame el colorFondo: ";
    cin >> colorFondo;
    c=new Circulo(radio,colorBorde,colorFondo);//que pasa si comento esta?
    cout << endl << "Circulo creado" << endl;
    imprimeCirculo(c);
    return c;//antes de desaparecer la referencia se copia afuera su direccion
}

