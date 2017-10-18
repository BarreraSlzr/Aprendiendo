#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"
#include "D.h"
#include "E.h"

using namespace std;

void pausa();
void comportamientosDeA();
void comportamientosDeB();
void comportamientosDeC();
void comportamientosDeD();
void comportamientosDeE();

int main()
{
    comportamientosDeA();
    comportamientosDeB();
    comportamientosDeC();
    comportamientosDeD();
    comportamientosDeE();
    return 0;
}

void pausa(){
    cout << "Presiona entrar para continuar..." << endl;
    cin.get();
}

void comportamientosDeA(){
    A a;
    a.andar();
    a.animar();
    a.alimentar();
    pausa();
}

void comportamientosDeB(){
    B b;
    b.andar();
    b.animar();
    b.alimentar();
    b.bailar();
    b.brincar();
    b.beber();
    pausa();
}

void comportamientosDeC(){
    C c;
    c.andar();
    c.animar();
    c.alimentar();
    c.correr();
    c.conversar();
    c.comer();
    pausa();
}

void comportamientosDeD(){
    D d;
    d.andar();
    d.animar();
    d.alimentar();
    d.danzar();
    d.dibujar();
    d.dormir();
    pausa();
}

void comportamientosDeE(){
    E e;
    e.andar();
    e.animar();
    e.alimentar();
    e.esperar();
    e.escuchar();
    e.escribir();
    pausa();
}
