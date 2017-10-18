#ifndef STUDENTMANAGERDAO_H_INCLUDED
#define STUDENTMANAGERDAO_H_INCLUDED

#include <fstream>
#include "StudentConstants.h"
#include "Student.h"
#include "IntegerIndex.h"
#include "StringIndex.h"

using namespace std;

class StudentManagerDAO{
    fstream file;
    IntegerIndex idIndex;
    StringIndex nameIndex;
public:
    StudentManagerDAO(){
        file.open(STUDENT_FILE_NAME, ios::in | ios::out | ios::binary | ios::app);
        file.close();
        file.open(STUDENT_FILE_NAME, ios::in | ios::out | ios::binary);
    }
    void add(Student* s){
        int length;
        idIndex.add(s->getId(),length=getLength());
        nameIndex.add(s->getName(),length);
        file.seekg(0,ios_base::end);
        file.write((char*)s,sizeof(Student));
    }
    void get(Student* s,int position){
        file.seekg(position*sizeof(Student),ios_base::beg);
        file.read((char*)s,sizeof(Student));
    }
    Student* get(int position){
        Student* s=new Student(0,(char*)"");
        get(s,position);
        return s;
    }
    void update(Student* s,int position){
        int nbytes=sizeof(Student);
        file.seekg(position*nbytes,ios_base::beg);
        file.write((char*)s,nbytes);
        //indexes pending to update
    }
    int getLength(){
        int recordsCount,currentPosition=file.tellg();
        file.seekg(0,ios_base::end);
        recordsCount=file.tellg()/sizeof(Student);
        file.seekg(currentPosition,ios_base::beg);
        return recordsCount;
    }
    int getRecordPositionById(int id){
        return idIndex.get(id);
    }
    int getRecordPositionByName(string name){
        return nameIndex.get(name);
    }
    //suppress operation pending
};

#endif // STUDENTMANAGERDAO_H_INCLUDED
