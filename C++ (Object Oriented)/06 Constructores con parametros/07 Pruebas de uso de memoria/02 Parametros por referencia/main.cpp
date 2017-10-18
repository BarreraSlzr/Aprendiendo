#include <iostream>

using namespace std;

int memoriaEnUso;

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

void imprimeCirculo(Circulo* c);
Circulo* capturaDatosCirculo();
void imprimeMemoriaEnUso();
void incrementaMemoriaEnUso(int cantidad);
void decrementaMemoriaEnUso(int cantidad);
void pausa();

int main()
{
    imprimeMemoriaEnUso();
    Circulo* c;
    incrementaMemoriaEnUso(sizeof(c));

    c=capturaDatosCirculo();//se recibe copia de la referencia al circulo
    decrementaMemoriaEnUso(sizeof(Circulo*));
    decrementaMemoriaEnUso(sizeof(double));
    decrementaMemoriaEnUso(sizeof(int));
    decrementaMemoriaEnUso(sizeof(int));
    cout << endl << "Circulo recibido" << endl;
    imprimeCirculo(c);
    decrementaMemoriaEnUso(sizeof(c));
    //donde pongo el delete?
    delete c;
    decrementaMemoriaEnUso(sizeof(Circulo));//tras el delete
    decrementaMemoriaEnUso(sizeof(c));
    return 0;
}

void imprimeCirculo(Circulo* c){
    incrementaMemoriaEnUso(sizeof(c));
    cout << "Propiedades del circulo:" << endl;
    cout << "radio=" << c->dameRadio() << endl;
    cout << "colorBorde=" << c->dameColorBorde() << endl;
    cout << "colorFondo=" << c->dameColorFondo() << endl;
    cout << "area=" << c->dameArea() << endl << endl;
}

Circulo* capturaDatosCirculo(){
    Circulo* c;//referencia a un futuro circulo
    incrementaMemoriaEnUso(sizeof(c));
    double radio;
    incrementaMemoriaEnUso(sizeof(radio));
    int colorBorde;
    incrementaMemoriaEnUso(sizeof(colorBorde));
    int colorFondo;
    incrementaMemoriaEnUso(sizeof(colorFondo));
    cout << "Datos por defecto" << endl;
    c=new Circulo();//se solicita memoria para un circulo
    incrementaMemoriaEnUso(sizeof(Circulo));
    imprimeCirculo(c);
    decrementaMemoriaEnUso(sizeof(c));
    cout << "Dame el radio: ";
    cin >> radio;
    cout << "Dame el colorBorde: ";
    cin >> colorBorde;
    cout << "Dame el colorFondo: ";
    cin >> colorFondo;
    cin.get();
    cout << endl << "Datos cambiados" << endl;
    c->fijaRadio(radio);
    c->fijaColorBorde(colorBorde);
    c->fijaColorFondo(colorFondo);
    imprimeCirculo(c);
    decrementaMemoriaEnUso(sizeof(c));
    return c;//antes de desaparecer la referencia se copia afuera su direccion
}

void imprimeMemoriaEnUso(){
    cout << "Memoria en uso es: " << memoriaEnUso << " bytes" << endl;
    pausa();
}

void incrementaMemoriaEnUso(int cantidad){
    memoriaEnUso+=cantidad;
    imprimeMemoriaEnUso();
}

void decrementaMemoriaEnUso(int cantidad){
    memoriaEnUso-=cantidad;
    imprimeMemoriaEnUso();
}

void pausa(){
    cout << "Presiona entrar para continuar..." << endl;
    cin.get();
}
