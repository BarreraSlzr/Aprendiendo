#ifndef ALUMNO_H
#define ALUMNO_H
#include <iostream>

using namespace std;

class Alumno
{
    private:
        string nombre;
    protected:
    public:
        Alumno();
        virtual ~Alumno();
        string dameNombre();
};

#endif // ALUMNO_H
