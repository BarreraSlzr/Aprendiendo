#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include "Student.h"
#include "StudentManager.h"

using namespace std;

void addStudent(int id,char* name);
void getStudent(int id);
void updateStudent(int id,char* nameToUpdate);
void listStudents();
void printStudent(Student* s);
void pause();

int main(){
    cout << "Data Access Object Sample" << endl << endl;
    listStudents();
    addStudent(1,(char*)"Luis");
    addStudent(2,(char*)"Alberto");
    getStudent(2);
    getStudent(1);
    updateStudent(2,(char*)"Albert");
    listStudents();
    addStudent(3,(char*)"Munoz");
    listStudents();
    return EXIT_SUCCESS;
}

void pause(){
    cout << "Press enter to continue...";
    cin.get();
}

void printStudent(Student* s){
    cout << "student´s id is " << s->getId() << endl;
    cout << "student´s name is " << s->getName() << endl;
}

void addStudent(int id,char* name){
    StudentManager* studentList=new StudentManager;
    cout << "addStudent() procedure" << endl;
    cout << "Initial list length = " << studentList->getLength() << endl;
    cout << "Adding id=" << id << "; name=" << name << endl;
    studentList->add(id,name);
    delete studentList;
    pause();
    cout << endl;
}

void getStudent(int id){
    StudentManager* studentList=new StudentManager;
    Student* student;
    cout << "getStudent() procedure" << endl;
    cout << "List length = " << studentList->getLength() << endl;
    cout << "Getting student which id is " << id << endl;
    student=studentList->getById(id);
    printStudent(student);
    delete student;
    delete studentList;
    pause();
    cout << endl;
}

void updateStudent(int id,char* nameToUpdate){
    StudentManager* studentList=new StudentManager;
    Student* student;
    cout << "updateStudent() procedure" << endl;
    cout << "List length = " << studentList->getLength() << endl;
    cout << "Using id=" << id << "..." << endl;
    student=studentList->getById(id);
    printStudent(student);
    cout << "Updating name to " << nameToUpdate << endl;
    student->setName(nameToUpdate);
    studentList->update(student);
    delete student;
    delete studentList;
    pause();
    cout << endl;
}

void listStudents(){
    StudentManager* studentList=new StudentManager;
    Student* student;
    int i,totalStudents=studentList->getLength();
    cout << "listStudents() procedure" << endl;
    for(i=0;i<totalStudents;i++){
        student=studentList->get(i);
        printStudent(student);
        delete student;
    }
    delete studentList;
    pause();
    cout << endl;
}

