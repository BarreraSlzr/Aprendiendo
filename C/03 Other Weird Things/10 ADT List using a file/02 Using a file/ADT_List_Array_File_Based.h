#ifndef ADT_LIST_ARRAY_FILE_BASED_H_INCLUDED
#define ADT_LIST_ARRAY_FILE_BASED_H_INCLUDED
#include <iostream>
#include "Data_Types_and_Constants.h"
#include "ADT_List_Array_Based_DAO.h"
#include "util.h"

typedef int position;
const position ERROR_POSITION=-1;

class List{
    ADTListArrayBasedDAO* dao;
    position lastPosition;
    string name;
    string extension;
public:
    List(string name,string extension);
    ~List();
    void insert(TypeElement* x, position p);
    void insert(TypeElement* x);
    position localize(TypeElement* x);
    TypeElement* get(position p);
    void remove(position p);
    position next(position p);
    position previous(position p);
    position first();
    position end();
    position last();
    bool isEmpty();
    bool isFull();
    void printError(string info);
    int length();
    List* concatenate(List* l);
    void setName(string n);
    string getName();
};

List::List(string name,string extension){//constructor
    dao=new ADTListArrayBasedDAO(name+extension);
    lastPosition=dao->getLength()-1;
    this->name=name;
    this->extension=extension;
}

void List::setName(string n){
    name=n;
}

string List::getName(){
    return name;
}

List::~List(){//destructor
    cout << "Removing List " << getName() << endl;
    delete dao;
}

void List::insert(TypeElement* x, position p){
    position q;
    if (isFull()){
        printError("List is full");
    }
    else if ((p<first()) || (p>end())){
        printError("Position to insert does not exist");
    }
    else{
        printError("IMPLEMENTATION PENDING");
    }
}

void List::insert(TypeElement* x){
    insert(x,end());
}

position List::localize(TypeElement* x){
    position p;
    printError("IMPLEMENTATION PENDING");
    return p;//end()
}

TypeElement* List::get(position p){
    if (p>=first() && p<=lastPosition){
        printError("IMPLEMENTATION PENDING");
    }
    return NULL;
}

void List::remove(position p){
    position q,r;
    if ((p<first()) || (p>lastPosition)){
        printError("Position to remove does not exist");
    }
    else{
        printError("IMPLEMENTATION PENDING");
    }
}

position List::next(position p){
    if (p>=first() && p<=lastPosition)
        return p+1;
    printError("Next position does not exist");
    return ERROR_POSITION;
}

position List::previous(position p){
    if (p>first() && p<=end())
        return p-1;
    printError("Previous position does not exist");
    return ERROR_POSITION;
}

position List::first(){
    if (!isEmpty())
        return 0;
    else return end();
}

position List::end(){
    return lastPosition+1;
}

position List::last(){
    if (isEmpty()){
        return ERROR_POSITION;
    }
    else{
        return previous(end());
    }
}

bool List::isEmpty(){
    return lastPosition<0;
}

bool List::isFull(){
    return false;
}

void List::printError(string info){
    cout << "PROGRAMMER ERROR: " << info << endl;
}

int List::length(){
    return lastPosition+1;
}

List* List::concatenate(List* l){
    List* m=new List(name+"_"+l->getName(),extension);
    position p=first(),q=end();
    while(!m->isFull() && p!=q){
        m->insert(get(p));
        p=next(p);
    }
    p=l->first();
    q=l->end();
    while(!m->isFull() && p!=q){
        m->insert(l->get(p));
        p=l->next(p);
    }
    return m;
}

#endif // ADT_LIST_ARRAY_FILE_BASED_H_INCLUDED
