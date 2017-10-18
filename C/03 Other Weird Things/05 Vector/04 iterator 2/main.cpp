#include <iostream>
#include <vector>
#include <string>
#include "Persona.h"
#include "util.h"

using namespace std;

void printList(vector<Persona>& lista);
void printListCell(vector<Persona>& lista,int position);
void swappingCells(vector<Persona>& lista,int cellPosX,int cellPosY);
void deletingAllCells(vector<Persona>& lista);

int main()
{
    vector<Persona> lista;
    Persona luis("Luis");
    Persona alberto("Alberto");
    Persona munoz("Munioz");
    cout << "3 people created" << endl;
    pause();
    lista.push_back(luis);
    cout << "After pushing back luis" << endl;
    pause();
    lista.push_back(alberto);
    cout << "After pushing back luis and alberto" << endl;
    pause();
    lista.push_back(munoz);
    cout << "After pushing back luis,alberto and munoz" << endl;
    pause();
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

void printList(vector<Persona>& lista){
    cout << "Using iterator:" << endl;
    vector<Persona>::iterator i;
    vector<Persona>::iterator j;
    for(i=lista.begin(),j=lista.end(); i!=j ; i++){
        cout << (*i).dameNombre() << endl;
    }
}

void printListCell(vector<Persona>& lista,int position){
    cout << "list[" << position << "]" << lista[position].dameNombre() << endl;
}

void swappingCells(vector<Persona>& lista,int cellPosX,int cellPosY){
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

void deletingAllCells(vector<Persona>& lista){
    while(!lista.empty()){
        lista.erase(lista.begin());
    }
}
