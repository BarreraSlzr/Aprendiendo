#include <iostream>

using namespace std;

class Figura{
    //atributos
public:
    virtual void rotar(int grados)=0;//metodos puros
    virtual void dibujar()=0;
};

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
    //Figura f;  //no compila por no ser instanciable una clase abstracta
    Circulo c;
    Triangulo t;
    cout<<"Con la instancia de Circulo:\n";
    c.rotar(10);
    c.dibujar();
    cout<<"\nCon la instancia de Triangulo:\n";
    c.rotar(10);
    c.dibujar();

    return 0;
}
