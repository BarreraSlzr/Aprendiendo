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

Student* students[MAX_STUDENTS];
bool updatedStudents[MAX_STUDENTS];

void pause(){
    cout << "Press enter to continue..." << endl;
    cin.get();
}

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
    pause();
}

Student* readStudent(ifstream& file){
    Student* s=new Student(0,(char*)"");
    cout << "Reading a student" << endl;
    file.read((char*)s,sizeof(Student));
    return s;
}

int countWrittenRecords(ifstream& file){
    int writtenRecords;
    file.seekg(0,ios_base::end);
    writtenRecords=file.tellg()/sizeof(Student);
    file.seekg(0,ios_base::beg);
    cout << "Counted written records: " << writtenRecords << endl;
    return writtenRecords;
}

void readStudents(){
    ifstream file;
    cout << "Reading students list" << endl;
    file.open(FILE_NAME, ios::binary);
    if(file.is_open()){
        for(int i=0,writtenRecords=countWrittenRecords(file);i<MAX_STUDENTS&&i<writtenRecords;i++){
            students[i]=readStudent(file);
        }
        file.close();
    }
    else{
        cout << "An error occured while reading student list" << endl;
    }
    pause();
}

void printStudent(Student* s){
    cout << "student´s id is " << s->getId() << endl;
    cout << "student´s name is " << s->getName() << endl;
}

void printStudents(){
    for(int i=0;i<MAX_STUDENTS&&students[i];i++){
        printStudent(students[i]);
    }
    pause();
}

void deleteStudents(){
    cout << "deleting students..." << endl;
    for(int i=0;i<MAX_STUDENTS&&students[i];i++){
        delete students[i];
    }
    pause();
}

void createStudents(){
    students[0]=new Student(395041167,(char*)"Luis");
    students[1]=new Student(2233517,(char*)"Albert");;
}

void updateStudent(int position,char* newName){
    cout << "Updating student at position " << position << endl;
    students[position]->setName(newName);
    updatedStudents[position]=true;
    pause();
}

void updateFile(){
    ofstream file;
    file.open(FILE_NAME, ofstream::in | ofstream::out | ios::binary);
    if(file.is_open()){
        for(int i=0;i<MAX_STUDENTS&&students[i];i++){
            if (updatedStudents[i]){
                file.seekp(i*sizeof(Student));
                writeStudent(file,students[i]);
            }
        }
        file.close();
    }
    else{
        cout << "An error occured while writing student list" << endl;
    }
    pause();
}

int main(){
    cout << "Direct access to update records into a file..." << endl;
    createStudents();
    printStudents();
    writeStudents();
    deleteStudents();
    readStudents();
    printStudents();
    updateStudent(0,(char*)"Luis M.");
    updateStudent(1,(char*)"Luis Alberto M. G.");
    printStudents();
    updateFile();
    deleteStudents();
    readStudents();
    printStudents();
    deleteStudents();
    return EXIT_SUCCESS;
}
