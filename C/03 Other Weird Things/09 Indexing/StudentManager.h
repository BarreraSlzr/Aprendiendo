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
    Student* get(Student& s,int position){
        dao.get(&s,position);
        return &s;
    }
    bool update(Student* s){
        dao.update(s,dao.getRecordPositionById(s->getId()));
        return true;//this should return false whether getRecordPositionById() fails
    }
    int getLength(){
        return dao.getLength();
    }
    Student* getById(int idStudent){
        int pos=dao.getRecordPositionById(idStudent);
        if (pos!=INVALID_INDEX){
            return get(pos);
        }
        return nullptr;
    }
    Student* getByName(string name){
        int pos=dao.getRecordPositionByName(name);
        if (pos!=INVALID_INDEX){
            return get(pos);
        }
        return nullptr;
    }
};

#endif // STUDENTMANAGER_H_INCLUDED
