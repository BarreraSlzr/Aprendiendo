#ifndef STUDENTMANAGERDAO_H_INCLUDED
#define STUDENTMANAGERDAO_H_INCLUDED

#include <fstream>
#include "StudentConstants.h"
#include "Student.h"

using namespace std;

class StudentManagerDAO{
    fstream file;
public:
    StudentManagerDAO(){
        file.open(STUDENT_FILE_NAME, ios::in | ios::out | ios::binary | ios::app);
        file.close();
        file.open(STUDENT_FILE_NAME, ios::in | ios::out | ios::binary);
    }
    ~StudentManagerDAO(){
        cout << "destroying StudentManagerDAO" << endl;
        //file.close();//fstream destructor closes openned file
    }
    void add(Student* s){
        int nbytes;
        cout << "adding a student" << endl;
        file.seekg(0,ios_base::end);
        file.write((char*)s,nbytes=sizeof(Student));
        /*vease update(), ¿sera bueno cerrar el archivo para actualizarlo
         y abrirlo de nuevo?*/
        cout << "Written " << nbytes << " bytes" << endl;
    }
    void get(Student* s,int position){
        cout << "Reading a student by position" << endl;
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
        cout << "Updating a student at position " << position << endl;
        file.seekg(position*nbytes,ios_base::beg);
        file.write((char*)s,nbytes);
        cout << "Updated " << nbytes << " bytes" << endl;
    }
    int getLength(){
        file.seekg(0,ios_base::end);
        return file.tellg()/sizeof(Student);
    }
    int getRecordPositionById(int id){
        Student* z=new Student(0,(char*)"");
        int i,length;
        cout << "Getting a student position" << endl;
        file.seekg(0,ios_base::beg);
        for(i=0,length=getLength();i<length;i++){
            get(z,i);
            if (z->getId()==id){
                delete z;
                return i;
            }
        }
        return length;
    }
};

#endif // STUDENTMANAGERDAO_H_INCLUDED
