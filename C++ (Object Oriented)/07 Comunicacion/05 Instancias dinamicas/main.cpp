#include <iostream>
#include <stdio.h>
#include <stdlib.h>
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
    bool esIgualA(Circulo* c){
        if (this->radio>=c->dameRadio() && this->radio<=c->dameRadio() &&
            this->colorBorde==c->dameColorBorde() &&
            this->colorFondo==c->dameColorFondo()){
            return true;
        }
        else{
            return false;
        }
    }
};

int main()
{
    Circulo *c1,*c2,*c3;//variables de instancia
    c1=new Circulo(10,11,14);//instancia dinamica
    c2=new Circulo(10,11,14);
    c3=new Circulo(12,11,14);
    if (c1->esIgualA(c2)){//que pasa si le pones &c2?
        cout << "c1 y c2 son iguales" << endl;
    }
    else{
        cout << "c1 y c2 son diferentes" << endl;
    }
    if (c1->esIgualA(c3)){
        cout << "c1 y c3 son iguales" << endl;
    }
    else{
        cout << "c1 y c3 son diferentes" << endl;
    }
    delete c1;
    delete c2;
    delete c3;
    return 0;
}
