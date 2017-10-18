#include <iostream>
#include <vector>
#include <string>
#include "Persona.h"
#include "util.h"

using namespace std;

void printList(const vector<Persona*>& lista);
void printListCell(const vector<Persona*>& lista,int position);
void swappingCells(vector<Persona*>& lista,int cellPosX,int cellPosY);
void deletingAllCells(vector<Persona*>& lista);

int main()
{
    vector<Persona*> lista;
    Persona* luis=new Persona("Luis");
    Persona* alberto=new Persona("Alberto");
    Persona* munoz=new Persona("Munioz");
    lista.push_back(luis);
    lista.push_back(alberto);
    lista.push_back(munoz);
    printList(lista);
    pause();
    swappingCells(lista,0,2);
    pause();
    cout << "after swappingCells() call:" << endl;
    printList(lista);
    pause();
    deletingAllCells(lista);
    pause();
    cout << "after deletingAllCells() call:" << endl;
    printList(lista);
    pause();
    return 0;
}

void printList(const vector<Persona*>& lista){//solo si no se pretende modificar se usa const
    cout << "Using iterator:" << endl;
    vector<Persona*>::const_iterator i;//en lugar de const_iterator se puede usar iterator
    vector<Persona*>::const_iterator j;//solo si no se recibio parametro const
    for(i=lista.begin(),j=lista.end(); i!=j ; i++){
        cout << (*i)->dameNombre() << endl;
    }
}

void printListCell(const vector<Persona*>& lista,int position){
    cout << "list[" << position << "]" << lista[position]->dameNombre() << endl;
}

void swappingCells(vector<Persona*>& lista,int cellPosX,int cellPosY){
    cout << "Swapping cells:" << endl;
    cout << "list size = " << lista.size() << endl;
    cout << "before swapping:" << endl;
    printListCell(lista,cellPosX);
    printListCell(lista,cellPosY);
    swap(lista[cellPosX], lista[cellPosY]);
    cout << endl << "after swapping:" << endl;
    printListCell(lista,cellPosX);
    printListCell(lista,cellPosY);
}

void deletingAllCells(vector<Persona*>& lista){
    while(!lista.empty()){
        delete lista[0];
        lista.erase(lista.begin());
    }
}
