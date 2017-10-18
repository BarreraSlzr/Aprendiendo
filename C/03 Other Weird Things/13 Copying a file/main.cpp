#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include "Student.h"
#include "StudentManager.h"

#define BUFFER_SIZE 10

using namespace std;

void pause(){
    cout << "Press enter to continue...";
    cin.get();
}

void printStudent(Student* s){
    cout << "student´s id is " << s->getId() << endl;
    cout << "student´s name is " << s->getName() << endl;
}

void listStudents(string fileName){
    StudentManager* studentList=new StudentManager(fileName);
    Student* student;
    int i,totalStudents=studentList->getLength();
    cout << "listStudents() procedure from file " << fileName << endl;
    for(i=0;i<totalStudents;i++){
        student=studentList->get(i);
        printStudent(student);
        delete student;
    }
    delete studentList;
    pause();
    cout << endl;
}

void copyFile(string dest,string source){
    ifstream input;
    ofstream output;
    char buffer[BUFFER_SIZE];
    int bytesRead;
    input.open(source, ios::in | ios::binary);
    if (input.is_open()){
        output.open(dest, ios::out | ios::binary);
        if (output.is_open()){
            input.read(buffer,BUFFER_SIZE);
            while((bytesRead=input.gcount())>0){
                cout << "read " << bytesRead << " bytes" << endl;
                output.write(buffer,bytesRead);
                input.read(buffer,BUFFER_SIZE);
            }
            output.close();
        }
        else{
            cout << "Error opening output file" << endl;
        }
        input.close();
    }
    else{
        cout << "Error opening input file" << endl;
    }
}

int main(){
    string suffix=".bak",outputFileName;
    cout << "File Copy Sample" << endl << endl;
    listStudents(STUDENT_FILE_NAME);
    copyFile(outputFileName=STUDENT_FILE_NAME+suffix,STUDENT_FILE_NAME);
    listStudents(outputFileName);
    return EXIT_SUCCESS;
}
