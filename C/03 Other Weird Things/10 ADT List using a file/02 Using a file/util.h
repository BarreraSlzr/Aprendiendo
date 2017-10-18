#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include <iostream>
#include <time.h>
using namespace std;

//to check for Unix use __unix__
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

#define CHARACTERS_PER_ROW 80

int objectCount=0;

class Object{
public:
    Object(){
        objectCount++;
    }
    virtual ~Object(){
        objectCount--;
    }
    virtual string toString()=0;
    virtual bool equals(Object& x){
        return this==&x;
    }
    virtual bool equals(Object* x){
        return this==x;
    }
};

void freeScan(){
    time_t timeBegin=time(NULL),timeEnd;
    char c=cin.get();
    timeEnd=time(NULL);
    if (difftime(timeEnd,timeBegin)<1){
        if (c!='\n'){
            do{
                c=cin.get();
            }while (c!='\n' && c!=cin.eof());
        }
        cin.get();
    }
}

void pause(string text){
    cout << text;
    freeScan();
}

void pause(){
    pause("Press enter key to continue . . .");
}

void pauseFinish(){
    pause("Press enter key to finish . . .");
}

void printCentered(string text,string filling){
    int textLength=text.length();
    int spaces=(CHARACTERS_PER_ROW-textLength)/2;
    int i;
    for(i=0;i<spaces;i++){
        cout << filling;
    }
    cout << text;
    i+=textLength;
    for(;i<CHARACTERS_PER_ROW;i++){
        cout << filling;
    }
}

#endif // UTIL_H_INCLUDED
