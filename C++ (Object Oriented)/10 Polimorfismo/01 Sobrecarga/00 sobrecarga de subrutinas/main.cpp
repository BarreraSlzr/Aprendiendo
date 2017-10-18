#include <iostream>

using namespace std;

void imprimeNumero(int n){
    cout << "imprimiendo un int " << n << endl;
}

void imprimeNumero(short n){
    cout << "imprimiendo un short " << n << endl;
}

void imprimeNumero(double n){
    cout << "imprimiendo un double " << n << endl;
}

void imprimeNumero(float n){
    cout << "imprimiendo un float " << n << endl;
}

int main()
{
    int a=10;
    short b=20;
    float c=4.5;
    double d=5.8;
    imprimeNumero(a);
    imprimeNumero(b);
    imprimeNumero(30);
    imprimeNumero(c);
    imprimeNumero(d);
    imprimeNumero(6.2);
    return 0;
}
