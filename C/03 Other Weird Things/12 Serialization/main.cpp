#include <iostream>
#include <cstdlib>
#include <fstream>
#define FILE_NAME "serialization.dat"

using namespace std;

void pause(){
    cout << "Press enter to continue...";
    cin.get();
}

void save(int a,float b){
    ofstream file;
    file.open(FILE_NAME,ios_base::binary | ios_base::out | ios_base::trunc);
    file.write((char*)&a,sizeof(int));
    file.write((char*)&b,sizeof(float));
    file.close();
}

int load(float& b){
    ifstream file;
    int a;
    file.open(FILE_NAME);
    file.read((char*)&a,sizeof(int));
    file.read((char*)&b,sizeof(float));
    file.close();
    return a;
}

int main(){
    int a=65;
    float b=2.5;
    cout << "Serialization Sample" << endl << endl;
    cout << "Saving a=" << a << ", b=" << b << endl;
    save(a,b);
    a=load(b);
    cout << "Loaded a=" << a << ", b=" << b << endl;
    pause();
    return EXIT_SUCCESS;
}
