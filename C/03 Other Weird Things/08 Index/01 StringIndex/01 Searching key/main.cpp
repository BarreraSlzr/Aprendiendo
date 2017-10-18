#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include "StringIndex.h"

using namespace std;

void pause(){
    cout << "Press enter to continue...";
    cin.get();
}

void printKeyAndValue(StringIndex& index,string key){
    cout << "key=" << key << "; value=" << index.get(key) << endl;
}

void testIndex(){
    StringIndex index;
    index.add("Luis",0);
    index.add("Carlos",2);
    index.add("Alberto",1);
    cout << "Listing index:" << endl;
    cout << index.toString() << endl;
    printKeyAndValue(index,"Luis");
    printKeyAndValue(index,"Alberto");
    printKeyAndValue(index,"Carlos");
}

int main(){
    cout << "StringIndex Sample" << endl << endl;
    testIndex();
    pause();
    return EXIT_SUCCESS;
}
