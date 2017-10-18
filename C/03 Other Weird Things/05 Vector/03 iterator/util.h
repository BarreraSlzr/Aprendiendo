#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#include <iostream>
using namespace std;

//para preguntar por Unix se usa __unix__
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

void pause(){
    cout << "Press enter key to continue..." << endl;
    cin.get();
}

#endif // UTIL_H_INCLUDED
