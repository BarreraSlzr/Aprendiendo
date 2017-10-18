#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <cstring>

#define FILE_NAME "student.dat"
#define STUDENT_NAME_LENGTH 25

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

void writeStudent(Student& s){
    ofstream file;
    int nbytes;
    cout << "Writing a student" << endl;
    file.open(FILE_NAME, ios::trunc | ios::binary);
    if(file.is_open()){
        file.write((char*)&s,nbytes=sizeof(Student));
        cout << "Written " << nbytes << " bytes" << endl;
        file.close();
    }
    else{
        cout << "An error occured while writing a student" << endl;
    }
}

Student* readStudent(){
    ifstream file;
    Student* s=new Student(0,(char*)"");
    cout << "Reading a student" << endl;
    file.open(FILE_NAME, ios::binary);
    if(file.is_open()){
        file.read((char*)s,sizeof(Student));
        file.close();
    }
    else{
        cout << "An error occured while reading a student" << endl;
    }
    return s;
}

void printStudent(Student* s){
    cout << "student´s id is " << s->getId() << endl;
    cout << "student´s name is " << s->getName() << endl;
}

int main(){
    Student luis(395041167,(char*)"Luis Albert");
    Student* albert;
    cout << "Writing one record to a file..." << endl;
    printStudent(&luis);
    writeStudent(luis);
    albert=readStudent();
    printStudent(albert);
    delete albert;
    return EXIT_SUCCESS;
}
