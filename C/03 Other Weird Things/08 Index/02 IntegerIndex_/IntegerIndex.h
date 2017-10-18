#ifndef INTEGERINDEX_H_INCLUDED
#define INTEGERINDEX_H_INCLUDED

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class IntegerIndexCell{
public:
    int key;
    int value;
    IntegerIndexCell(int key,int value){
        this->key=key;
        this->value=value;
    }
};

class IntegerIndex{
    vector<IntegerIndexCell*> elements;
    vector<IntegerIndexCell*>::iterator findSortedPosition(int key){
        vector<IntegerIndexCell*>::iterator pos,endPos;
        for(pos=elements.begin(),endPos=elements.end();pos!=endPos && key>(*pos)->key;
            pos++);
        return pos;
    }
public:
    ~IntegerIndex(){
        while(!elements.empty()){
            delete elements[0];
            elements.erase(elements.begin());
        }
    }
    void add(int key,int value){
        elements.insert(findSortedPosition(key),new IntegerIndexCell(key,value));
    }
    int get(int key){
        vector<IntegerIndexCell*>::const_iterator pos,endPos;
        for(pos=elements.begin(),endPos=elements.end();pos!=endPos;pos++){
            if ((*pos)->key==key){
                return (*pos)->value;
            }
        }
        return 0;
    }
    string toString(){
        vector<IntegerIndexCell*>::const_iterator pos,endPos;
        stringstream ss;
        for(pos=elements.begin(),endPos=elements.end();pos!=endPos;pos++){
            ss << "key=" << (*pos)->key << "; value="<< (*pos)->value << endl;
        }
        return ss.str();
    }
};

#endif // INTEGERINDEX_H_INCLUDED
