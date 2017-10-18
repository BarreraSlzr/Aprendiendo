#include <iostream>

using namespace std;

#define MAX_VOLADORES 3

class Ave{
public:
    virtual void aletear()=0;
};

class Vehiculo{
public:
    virtual void arrancar()=0;
};

class Hombre{
public:
    void sonreir(){
        cout << "=)" << endl;
    };
};

class Volador{
public:
    virtual void despegar()=0;
    virtual void planear()=0;
    virtual void aterrizar()=0;
};

class Pajaro:public Ave,public Volador{
public:
    void aletear(){
        cout << "moviendo alas..." << endl;
    };
    void despegar(){
        cout << "aleteando fuerte..." << endl;
    }
    void planear(){
        cout << "con alas firmes..." << endl;
    }
    void aterrizar(){
        cout << "aleteando poco..." << endl;
    }
};

class Avion:public Vehiculo,public Volador{
public:
    void arrancar(){
        cout << "arrancando avion..." << endl;
    }
    void despegar(){
        cout << "encarrerandose sobre el piso..." << endl;
    }
    void planear(){
        cout << "moviendo alerones..." << endl;
    }
    void aterrizar(){
        cout << "bajando velocidad..." << endl;
    }
};

class Superman:public Hombre,public Volador{
public:
    void despegar(){
        cout << "levantando el pu\xA4o..." << endl;
    }
    void planear(){
        cout << "moviendo la capa..." << endl;
    }
    void aterrizar(){
        cout << "bajando el pu\xA4o..." << endl;
    }
};

int main()
{
    Pajaro* cuic=new Pajaro();
    Avion* f14=new Avion();
    Superman* clark=new Superman();
    Volador* voladores[MAX_VOLADORES];
    int i;

    voladores[0]=cuic;
    voladores[1]=f14;
    voladores[2]=clark;
    cuic->aletear();
    f14->arrancar();

    cout << endl << "Se les pide despegar:\n";
    for(i=0;i<MAX_VOLADORES;i++){
        voladores[i]->despegar();
    }
    cout << "\nSe les pide planear:\n";
    for(i=0;i<MAX_VOLADORES;i++){
        voladores[i]->planear();
    }
    cout << "\nSe les pide aterrizar:\n";
    for(i=0;i<MAX_VOLADORES;i++){
        voladores[i]->aterrizar();
    }
    cout << endl;
    clark->sonreir();
    return 0;
}
