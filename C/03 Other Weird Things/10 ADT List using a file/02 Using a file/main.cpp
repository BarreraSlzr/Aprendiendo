#include <iostream>
#include <cstring>
#include "ADT_List_Array_File_Based.h"

#define MAX_LINES_PER_PAGE 20

void testList(List& l);
void printElement(TypeElement* x);
void printList(List& l);
void reversePrintList(List* l);

using namespace std;

int main()
{
    List alpha("alpha",".dat"),beta("beta",".dat");
    List* gamma;
    Person* insertable;

    printCentered("TDA List using files","#");
    pause();
    cout << endl;
    cout << "Creating Alpha list..." << endl;
    alpha.insert(insertable=new Person(65,(char*)"one"));
    delete insertable;
    alpha.insert(insertable=new Person(66,(char*)"two"));
    delete insertable;
    testList(alpha);

    cout << "Creating Beta list..." << endl;
    beta.insert(insertable=new Person(67,(char*)"three"));
    delete insertable;
    beta.insert(insertable=new Person(68,(char*)"four"));
    delete insertable;
    testList(beta);

    cout << "Concatenating lists..." << endl;
    gamma=alpha.concatenate(&beta);
    pause();
    testList(*gamma);
    delete gamma;
    return 0;
}

void testList(List& l){
    cout << "Printing " << l.getName() << " list..." << endl;
    printList(l);
    pause();
    cout << "printing first element..." << endl;
    cout << "test:" << l.get(l.first())->toString() << endl;
    pause();
    cout << "Printing last element..." << endl;
    cout << "test:" << l.get(l.last())->toString() << endl;
    pause();
    cout << "List length is: " << l.length() << endl;
    pause();
}

void reversePrintList(List* l){
    position p,first=l->first();
    cout << "Printing reverse list..." << endl;
    if (l->isEmpty()){
        cout << "List is empty";
    }
    else{
        p=l->end();
        do{
            p=l->previous(p);
            cout << l->get(p)->toString();
            cout << endl;
        }while(p!=first);
    }
}

void printList(List& l){
    position p,q;
    int lineCount=0;
    for(p=l.first(),q=l.end();p!=q;p=l.next(p)){
        cout << l.get(p)->toString() << endl;
        lineCount++;
        if (lineCount%MAX_LINES_PER_PAGE==0){
            pause();
        }
    }
}

