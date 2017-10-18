#ifndef STRINGINDEX_H_INCLUDED
#define STRINGINDEX_H_INCLUDED

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class StringIndexCell{
public:
    string key;
    int value;
    StringIndexCell(string key,int value){
        this->key=key;
        this->value=value;
    }
    ~StringIndexCell(){
        cout << "Destroying StringCell" << endl;
    }
};

class StringIndex{
    vector<StringIndexCell*> elements;
    vector<StringIndexCell*>::iterator findSortedPosition(string key){
        vector<StringIndexCell*>::iterator pos,endPos;
        for(pos=elements.begin(),endPos=elements.end();pos!=endPos && key>(*pos)->key;
            pos++);
        return pos;
    }
    vector<StringIndexCell*>::const_iterator getPosition(string key){
        vector<StringIndexCell*>::const_iterator pos,endPos;
        for(pos=elements.begin(),endPos=elements.end();pos!=endPos;pos++){
            if ((*pos)->key==key){
                return pos;
            }
        }
        return endPos;
    }
public:
    ~StringIndex(){
        cout << "Destroying StringIndex" << endl;
        while(!elements.empty()){
            delete elements[0];
            elements.erase(elements.begin());
        }
    }
    void add(string key,int value){
        elements.insert(findSortedPosition(key),new StringIndexCell(key,value));
    }
    int get(string key){
        vector<StringIndexCell*>::const_iterator pos=getPosition(key);
        if (pos!=elements.end()){
            return (*pos)->value;
        }
        return elements.size();
    }
    bool containsKey(string key){
        return getPosition(key)!=elements.end();
    }
    string toString(){
        vector<StringIndexCell*>::const_iterator pos,endPos;
        stringstream ss;
        for(pos=elements.begin(),endPos=elements.end();pos!=endPos;pos++){
            ss << "key=" << (*pos)->key << "; value="<< (*pos)->value << endl;
        }
        return ss.str();
    }
    int getLength(){
        return elements.size();
    }
};

#endif // STRINGINDEX_H_INCLUDED
