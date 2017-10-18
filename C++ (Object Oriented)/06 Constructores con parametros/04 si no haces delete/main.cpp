#include <iostream>

using namespace std;

class Circulo{
private:
    static constexpr double PI=3.1416;
    double radio;
    int colorBorde;
    int colorFondo;
public:
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

void capturaDatosCirculo(double* radio,int* colorBorde,int* colorFondo);

int main()
{
    Circulo* c;//variable de instancia
    double radio;
    int colorBorde,colorFondo;
    for(radio=1,colorBorde=100,colorFondo=1000;;radio++,colorBorde++,
    colorFondo++){
        c=new Circulo(radio,colorBorde,colorFondo);
        /*cout << "Datos del nuevo circulo:" << endl;
        cout << "Propiedades del circulo c:" << endl;
        cout << "radio=" << c->dameRadio() << endl;
        cout << "colorBorde=" << c->dameColorBorde() << endl;
        cout << "colorFondo=" << c->dameColorFondo() << endl;
        cout << "area=" << c->dameArea() << endl << endl;*/
        //delete c;//sin delete a cada objeto que pasa?
    }
    return 0;
}

void capturaDatosCirculo(double* radio,int* colorBorde,int* colorFondo){
    cout << "Dame el radio: ";
    cin >> *radio;
    cout << "Dame el colorBorde: ";
    cin >> *colorBorde;
    cout << "Dame el colorFondo: ";
    cin >> *colorFondo;
}

