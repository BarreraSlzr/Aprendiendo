#include <iostream>

using namespace std;

class Figura{
    //atributos
public:
    virtual void rotar(int grados){//metodo sin chiste, es inapropiado
        cout << "error: Figura::rotar " << grados << " grados\n";
    }
    virtual void dibujar(){
        cout << "error: Figura::dibujar\n";//se llama codigo muerto si no se ejecuta
    }
};//se pudo haber recurrido a metodos puros, en lugar de algo sin chiste, cierto?

class Circulo:public Figura{
    //atributos
public:
    void rotar(int grados){
        cout << "rotando circulo " << grados << " grados\n";
    }
    void dibujar(){
        cout << "dibujando circulo\n";
    }
};

class Triangulo:public Figura{
    //atributos
public:
    void rotar(int grados){
        cout << "rotando triangulo " << grados << " grados\n";
    }
    void dibujar(){
        cout << "dibujando triangulo\n";
    }
};

int main()
{
    Figura f;
    Circulo c;
    Triangulo t;
    cout << "Con la instancia de Figura:\n";
    f.rotar(10);//y para que quiero objetos de tipo Figura?
    f.dibujar();
    cout << "\nCon la instancia de Circulo:\n";
    c.rotar(10);
    c.dibujar();
    cout << "\nCon la instancia de Triangulo:\n";
    t.rotar(10);
    t.dibujar();

    return 0;
}
