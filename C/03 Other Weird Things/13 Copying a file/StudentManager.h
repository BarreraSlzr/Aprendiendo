#ifndef STUDENTMANAGER_H_INCLUDED
#define STUDENTMANAGER_H_INCLUDED

#include "StudentManagerDAO.h"
#include "Student.h"

class StudentManager{
    StudentManagerDAO* dao;
public:
    StudentManager(string fileName){
        dao=new StudentManagerDAO(fileName);
    }
    ~StudentManager(){
        delete dao;
    }
    bool add(int id,char* name){
        Student s(id,name);
        dao->add(&s);
        return true;
    }
    Student* get(int position){
        return dao->get(position);
    }
    void update(Student* s){
        dao->update(s,dao->getRecordPositionById(s->getId()));
    }
    int getLength(){
        return dao->getLength();
    }
    Student* getById(int idStudent){
        return get(dao->getRecordPositionById(idStudent));
    }
};

#endif // STUDENTMANAGER_H_INCLUDED
