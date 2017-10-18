#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include "IntegerIndex.h"

using namespace std;

void pause(){
    cout << "Press enter to continue...";
    cin.get();
}

void printKeyAndValue(IntegerIndex& index,int key){
    cout << "key=" << key << "; value=" << index.get(key) << endl;
}

void testIndex(){
    IntegerIndex index;
    index.add(12,0);
    index.add(7,2);
    index.add(4,1);
    cout << "Listing index:" << endl;
    cout << index.toString() << endl;
    printKeyAndValue(index,4);
    printKeyAndValue(index,7);
    printKeyAndValue(index,12);
}

int main(){
    cout << "IntegerIndex Sample" << endl << endl;
    testIndex();
    pause();
    return EXIT_SUCCESS;
}
