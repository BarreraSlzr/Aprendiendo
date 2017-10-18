#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cstring>

#define FILE_NAME "student.dat"
#define STUDENT_NAME_LENGTH 25
#define MAX_STUDENTS 2

using namespace std;

class Student{
    int id;
    char name[STUDENT_NAME_LENGTH+1];
public:
    Student(int id, char* name){
        this->id=id;
        strcpy(this->name,name);
    }
    int getId(){
        return id;
    }
    char* getName(){
        return name;
    }
};

Student* students[MAX_STUDENTS];

void writeStudent(ofstream& file,Student* s){
    int nbytes;
    cout << "Writing a student" << endl;
    file.write((char*)s,nbytes=sizeof(Student));
    cout << "Written " << nbytes << " bytes" << endl;
}

void writeStudents(){
    ofstream file;
    file.open(FILE_NAME, ios::trunc | ios::binary);
    if(file.is_open()){
        for(int i=0;i<MAX_STUDENTS&&students[i];i++){
            writeStudent(file,students[i]);
        }
        file.close();
    }
    else{
        cout << "An error occured while writing student list" << endl;
    }
}

Student* readStudent(ifstream& file){
    Student* s=new Student(0,(char*)"");
    cout << "Reading a student" << endl;
    file.read((char*)s,sizeof(Student));
    return s;
}

void readStudents(){
    ifstream file;
    cout << "Reading students list" << endl;
    file.open(FILE_NAME, ios::binary);
    if(file.is_open()){
        for(int i=0;i<MAX_STUDENTS;i++){
            students[i]=readStudent(file);
        }
        file.close();
    }
    else{
        cout << "An error occured while reading student list" << endl;
    }
}

void printStudent(Student* s){
    cout << "student´s id is " << s->getId() << endl;
    cout << "student´s name is " << s->getName() << endl;
}

void printStudents(){
    for(int i=0;i<MAX_STUDENTS&&students[i];i++){
        printStudent(students[i]);
    }
}

void deleteStudents(){
    for(int i=0;i<MAX_STUDENTS&&students[i];i++){
        delete students[i];
    }
}

void createStudents(){
    students[0]=new Student(395041167,(char*)"Luis");
    students[1]=new Student(2233517,(char*)"Albert");//que pasa si comentas esta?
}

int main(){
    cout << "Writing a list of records to a file..." << endl;
    createStudents();
    printStudents();
    writeStudents();
    deleteStudents();
    readStudents();
    printStudents();
    deleteStudents();
    return EXIT_SUCCESS;
}
