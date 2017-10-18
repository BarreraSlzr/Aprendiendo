#include <iostream>
#include "ADT_List_Array_Based.h"

const int MAX_LINES_PER_PAGE=20;

void printElement(TypeElement* x);
void printList(List& l);
void inicializaABC(List* l);
void imprimeListInversa(List* l);
string intToString(int x);

using namespace std;

int main()
{
    List alpha("alpha.dat"),beta("beta.dat");
    List* gamma;
    Person insertable;

    imprimirCentrado("TDA List concatenar con new","#");
    pausar();
    cout << endl;
    insertable.key=1;
    insertable.name="uno";
    alpha.insert(&insertable);
    insertable.key=2;
    insertable.name="dos";
    alpha.insert(&insertable);
    cout << "Imprimiendo lista alpha..." << endl;
    printList(alpha);
    cout << "imprimiendo primer elemento..." << endl;
    printElement(alpha.get(alpha.first()));
    cout << endl << "imprimiendo ultimo elemento..." << endl;
    printElement(alpha.get(alpha.last()));
    cout << endl << "Longitud de lista es: " << alpha.length() << endl;

    cout << "Concatenando listas..." << endl;
    insertable.key=3;
    insertable.name="tres";
    beta.insert(&insertable);
    insertable.key=4;
    insertable.name="cuatro";
    beta.insert(&insertable);
    cout << "Imprimiendo lista beta..." << endl;
    printList(beta);
    gamma=alpha.concatenate(&beta);
    cout << "Imprimiendo lista gamma..." << endl;
    printList(*gamma);
    delete gamma;
    return 0;
}

void printElement(TypeElement* x){
    cout << "Clave=" << x->key << ", Nombre=" << x->name;
}

bool List::equals(TypeElement* x,TypeElement* y){
    return x->key==y->key;
}

string intToString(int x){
    string s="";
    int previousX=x;
    if (x<0){
        x*=-1;
    }
    do{
        switch(x%10){
        case 0:
            s="0"+s;
            break;
        case 1:
            s="1"+s;
            break;
        case 2:
            s="2"+s;
            break;
        case 3:
            s="3"+s;
            break;
        case 4:
            s="4"+s;
            break;
        case 5:
            s="5"+s;
            break;
        case 6:
            s="6"+s;
            break;
        case 7:
            s="7"+s;
            break;
        case 8:
            s="8"+s;
            break;
        default:
            s="9"+s;
            break;
        }
        x/=10;
    }while(x>0);
    if (previousX<0){
        s="-"+s;
    }
    return s;
}

void inicializaABC(List* l){
    Person x;
    position i;
    int valorClave=1;

    i=l->first();
    while(!l->isFull()){
        cout << "Llenando con key " << valorClave << endl;
        x.key=valorClave++;
        x.name="El ";
        x.name+=intToString(x.key);
        x.name+="o.";
        l->insert(&x,i);
        i=l->next(i);
    }
}

void imprimeListInversa(List* l){
    position p,prim=l->first();
    cout << "Imprimiendo lista inversa..." << endl;
    if (l->isEmpty()){
        cout << "La lista está vacia";
    }
    else{
        p=l->end();
        do{
            p=l->previous(p);
            printElement(l->get(p));
            cout << endl;
        }while(p!=prim);
    }
}

void printList(List& l){
    position p,q;
    int lineCount=0;
    for(p=l.first(),q=l.end();p!=q;p=l.next(p)){
        printElement(l.get(p));
        cout << endl;
        lineCount++;
        if (lineCount%MAX_LINES_PER_PAGE==0){
            pausar();
        }
    }
}

