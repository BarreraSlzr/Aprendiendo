#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Persona{
    string nombre;
public:
    Persona(string nombre){
        this->nombre=nombre;
    }
    ~Persona(){
        cout << "Deleting " << dameNombre() << endl;
    }
    string dameNombre(){
        return nombre;
    }
};

void printList(vector<Persona*> lista);
//void printList(const vector<Persona*>& lista);//que se gana con esta forma?
void printListCell(vector<Persona*> lista,int position);
//void printListCell(const vector<Persona*>& lista,int position);//que se gana con esta forma?
void swappingCells(vector<Persona*>& lista,int cellPosX,int cellPosY);
//void swappingCells(vector<Persona*> lista,int cellPosX,int cellPosY);
void deletingAllCells(vector<Persona*>& lista);
//void deletingAllCells(vector<Persona*> lista);
void pause();

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

void printList(vector<Persona*> lista){
//void printList(const vector<Persona*>& lista){//lo apropiado es como esta
    unsigned int i,j;
    cout << "Iterando por indice:" << endl;
    for(i=0,j=lista.size(); i<j ; i++){//que con la concurrencia en el uso de la lista?
        cout << (lista[i])->dameNombre() << endl;
    }
    //lista[0]=nullptr;//que pasa si descomentas esta, usando const y no usando const?
}

void printListCell(vector<Persona*> lista,int position){
//void printListCell(const vector<Persona*>& lista,int position){//lo apropiado es como esta
    cout << "list[" << position << "]" << lista[position]->dameNombre() << endl;
}

void swappingCells(vector<Persona*>& lista,int cellPosX,int cellPosY){
//que pasa si comentas la anterior y descomentas la siguiente y tambien el prototipo
//void swappingCells(vector<Persona*> lista,int cellPosX,int cellPosY){
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
//void deletingAllCells(vector<Persona*> lista){//que pasa si lo usas sin &
    while(!lista.empty()){
        delete lista[0];
        lista.erase(lista.begin());
    }
}

void pause(){
    cout << "Press enter key to continue..." << endl;
    cin.get();
}
