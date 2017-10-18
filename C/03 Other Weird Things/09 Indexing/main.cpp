#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include "Student.h"
#include "StudentManager.h"

using namespace std;

void pause();
void printStudent(Student* s);
void addStudent(StudentManager& studentList,int id,char* name);
void getStudent(StudentManager& studentList,int id);
void getStudent(StudentManager& studentList,string name);
void updateStudent(StudentManager& studentList,int id,char* nameToUpdate);
void listStudents(StudentManager& studentList);
void listStudentsV2(StudentManager& studentList);

int main(){
    cout << "Indexing Sample" << endl << endl;
    StudentManager studentList;
    listStudents(studentList);
    addStudent(studentList,1,(char*)"Luis");
    addStudent(studentList,2,(char*)"Alberto");
    getStudent(studentList,2);
    getStudent(studentList,1);
    listStudents(studentList);
    addStudent(studentList,3,(char*)"Munoz");
    listStudentsV2(studentList);
    getStudent(studentList,"Luis");
    getStudent(studentList,"Alberto");
    getStudent(studentList,"Munoz");
    getStudent(studentList,4);
    getStudent(studentList,"Gomez");
    return EXIT_SUCCESS;
}

void pause(){
    cout << "Press enter to continue...";
    cin.get();
}

void printStudent(Student* s){
    cout << "student's id is " << s->getId() << endl;
    cout << "student's name is " << s->getName() << endl;
}

void addStudent(StudentManager& studentList,int id,char* name){
    cout << "addStudent() procedure" << endl;
    cout << "Initial list length = " << studentList.getLength() << endl;
    cout << "Adding id=" << id << "; name=" << name << endl;
    studentList.add(id,name);
    pause();
    cout << endl;
}

void getStudent(StudentManager& studentList,int id){
    Student* student;
    cout << "getStudent() by id procedure" << endl;
    cout << "List length = " << studentList.getLength() << endl;
    cout << "Getting student which id is " << id << endl;
    if ((student=studentList.getById(id))){
        printStudent(student);
        delete student;
    }
    else{
        cout << "student's id " << id << " not found" << endl;
    }
    pause();
    cout << endl;
}

void getStudent(StudentManager& studentList,string name){
    Student* student;
    cout << "getStudent() by name procedure" << endl;
    cout << "List length = " << studentList.getLength() << endl;
    cout << "Getting student which name is " << name << endl;
    if ((student=studentList.getByName(name))){
        printStudent(student);
        delete student;
    }
    else{
        cout << "student's name " << name << " not found" << endl;
    }
    pause();
    cout << endl;
}

void updateStudent(StudentManager& studentList,int id,char* nameToUpdate){
    Student* student;
    cout << "updateStudent() procedure" << endl;
    cout << "List length = " << studentList.getLength() << endl;
    cout << "Using id=" << id << "..." << endl;
    student=studentList.getById(id);
    printStudent(student);
    cout << "Updating name to " << nameToUpdate << endl;
    student->setName(nameToUpdate);
    studentList.update(student);
    delete student;
    pause();
    cout << endl;
}

void listStudents(StudentManager& studentList){
    Student* student;
    int i,totalStudents=studentList.getLength();
    cout << "listStudents() procedure" << endl;
    for(i=0;i<totalStudents;i++){
        printStudent(student=studentList.get(i));
        delete student;
    }
    pause();
    cout << endl;
}

void listStudentsV2(StudentManager& studentList){
    Student student(0,(char*)"");
    int i,totalStudents=studentList.getLength();
    cout << "listStudentsV2() procedure" << endl;
    for(i=0;i<totalStudents;i++){
        printStudent(studentList.get(student,i));
    }
    pause();
    cout << endl;
}

