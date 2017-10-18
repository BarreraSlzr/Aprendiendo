#include <stdio.h>
#include <stdlib.h>
//ruta relativa
#include "util.h"
//ruta absoluta
//#include "C:\\mislibrerias\\util.h"
//#include "/mislibrerias/util.h"
//ruta configurada en el IDE
//#include <util.h>

int main()
{
    printf("Te saludo\n");
    pausar();
    imprimirCentrado("Hola =)","*");
    return 0;
}
