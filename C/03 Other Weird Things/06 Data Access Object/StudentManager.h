#ifndef STUDENTMANAGER_H_INCLUDED
#define STUDENTMANAGER_H_INCLUDED

#include "StudentManagerDAO.h"
#include "Student.h"

class StudentManager{
    StudentManagerDAO dao;
public:
    bool add(int id,char* name){
        Student s(id,name);
        dao.add(&s);
        return true;
    }
    Student* get(int position){
        return dao.get(position);
    }
    bool update(Student* s){
        dao.update(s,dao.getRecordPositionById(s->getId()));
        return true;//this should return false whether getRecordPositionById() fails
    }
    bool update(Student* s,int position){
        dao.update(s,position);
        return true;//this should validate position
    }
    int getLength(){
        return dao.getLength();
    }
    Student* getById(int idStudent){
        //this should validate whether getRecordPositionById() returns getLength()
        return get(dao.getRecordPositionById(idStudent));
    }
};

#endif // STUDENTMANAGER_H_INCLUDED
