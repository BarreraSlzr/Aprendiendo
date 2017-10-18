#ifndef ADT_LIST_ARRAY_BASED_DAO_H_INCLUDED
#define ADT_LIST_ARRAY_BASED_DAO_H_INCLUDED

#include <fstream>
#include "Data_Types_and_Constants.h"

using namespace std;

class ADTListArrayBasedDAO{
    fstream recordsFile;
    fstream controlFile;
    int recordsCount;
    int updateRecordsCount(bool increment){
        if (increment){
            recordsCount++;
        }
        else{
            recordsCount--;
        }
        controlFile.seekg(0,ios_base::beg);
        controlFile.write((char*)&recordsCount,sizeof(recordsCount));
        return recordsCount;
    }
public:
    ADTListArrayBasedDAO(string fileName){
        recordsFile.open(fileName, ios::in | ios::out | ios::binary | ios::app);
        recordsFile.close();
        recordsFile.open(fileName, ios::in | ios::out | ios::binary);
        controlFile.open("Control_"+fileName, ios::in | ios::out | ios::binary | ios::app);
        controlFile.close();
        controlFile.open("Control_"+fileName, ios::in | ios::out | ios::binary);
        controlFile.seekg(0,ios_base::end);
        if (controlFile.tellg()>0){
            controlFile.seekg(0,ios_base::beg);
            controlFile.read((char*)&recordsCount,sizeof(recordsCount));
        }
        else{
            recordsCount=0;
        }

    }
    ~ADTListArrayBasedDAO(){
        cout << "destroying ADTListArrayBasedDAO" << endl;
        //recordsFile.close();//fstream destructor closes openned file
        //controlFile.close();//fstream destructor closes openned file
    }
    void add(TypeElement* e){
        int nbytes;
        recordsFile.seekg(0,ios_base::end);
        recordsFile.write((char*)e,nbytes=sizeof(TypeElement));
        updateRecordsCount(true);
    }
    TypeElement* get(TypeElement* e,int position){
        recordsFile.seekg(position*sizeof(TypeElement),ios_base::beg);
        recordsFile.read((char*)e,sizeof(TypeElement));
        return e;
    }
    TypeElement* get(int position){
        TypeElement* e=new TypeElement();
        return get(e,position);
    }
    void update(TypeElement* s,int position){
        int nbytes=sizeof(TypeElement);
        if (position>=recordsCount){
            add(s);
        }
        else{
            recordsFile.seekg(position*nbytes,ios_base::beg);
            recordsFile.write((char*)s,nbytes);
        }
    }
    int decreaseRecordsCount(){
        return updateRecordsCount(false);
    }
    int getCurrentFileLength(){
        recordsFile.seekg(0,ios_base::end);
        return recordsFile.tellg()/sizeof(TypeElement);
    }
    int getLength(){
        return recordsCount;
    }
};

#endif // ADT_LIST_ARRAY_BASED_DAO_H_INCLUDED
