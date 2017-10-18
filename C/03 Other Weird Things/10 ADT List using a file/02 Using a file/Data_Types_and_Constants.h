#ifndef DATA_TYPES_AND_CONSTANTS_H_INCLUDED
#define DATA_TYPES_AND_CONSTANTS_H_INCLUDED

#include <iostream>
#include <cstring>
#include <sstream>
#include "util.h"

#define NAME_LENGTH 25

using namespace std;

class Person:public Object{
    int id;
    char name[NAME_LENGTH];
public:
    Person(){
    }
    Person(int id,char* name){
        this->id=id;
        strcpy(this->name,name);
    }
    virtual ~Person(){
        cout << "destroying " << toString() << endl;
    }
    string toString(){
        stringstream s;
        s << "id=" << id << ", name=" << name;
        return s.str();
    }
    bool equals(Object* x){
        Person* p=dynamic_cast<Person*>(x);
        return p!=NULL && id==p->id;
    }
    bool equals(Object& x){
        Person* p=dynamic_cast<Person*>(&x);
        return p!=NULL && id==p->id;
    }
};

typedef Person TypeElement;

#endif // DATA_TYPES_AND_CONSTANTS_H_INCLUDED
