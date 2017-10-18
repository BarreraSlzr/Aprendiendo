#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cstring>

#define FILE_NAME "student.dat"
#define NAME_LENGTH 25
#define MAX_STUDENTS 2

using namespace std;

class Student{
    int id;
    char name[NAME_LENGTH+1];
public:
    Student(int id, char* name){
        setId(id);
        setName(name);
    }
    int getId(){
        return id;
    }
    char* getName(){
        return name;
    }
    void setId(int id){
        this->id=id;
    }
    void setName(char* name){
        strcpy(this->name,name);
    }
};

Student* students[MAX_STUDENTS];

void writeStudent(ofstream& file,Student* s){
    int id,nbytes,sizeOf;
    char* name;
    char nameLength;
    id=s->getId();
    name=s->getName();
    nameLength=(char)strlen(name);
    cout << "Writing a student" << endl;
    file.write((char*)&id,nbytes=sizeof(int));
    file.write((char*)&nameLength,sizeOf=sizeof(char));
    nbytes+=sizeOf;
    file.write(name,nameLength);
    nbytes+=nameLength;
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
    int id;
    char nameLength;
    char name[NAME_LENGTH+1];
    cout << "Reading a student" << endl;
    file.read((char*)&id,sizeof(int));
    file.read((char*)&nameLength,sizeof(char));
    file.read(name,nameLength);
    name[(int)nameLength]='\0';
    return new Student(id,name);
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
    students[1]=new Student(2233517,(char*)"Albert");;
}

int main(){
    cout << "Writing a list of records to a file (size fields)..." << endl;
    createStudents();
    printStudents();
    writeStudents();
    deleteStudents();
    readStudents();
    printStudents();
    deleteStudents();
    return EXIT_SUCCESS;
}
