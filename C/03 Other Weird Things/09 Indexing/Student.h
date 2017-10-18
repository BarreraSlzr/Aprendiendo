#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include "StudentConstants.h"

class Student{
    int id;
    char name[STUDENT_NAME_LENGTH+1];
public:
    Student(int id, char* name){
        this->id=id;
        setName(name);
    }
    int getId(){
        return id;
    }
    char* getName(){
        return name;
    }
    bool setName(char* name){
        strcpy(this->name,name);
        return true;
    }
};

#endif // STUDENT_H_INCLUDED
