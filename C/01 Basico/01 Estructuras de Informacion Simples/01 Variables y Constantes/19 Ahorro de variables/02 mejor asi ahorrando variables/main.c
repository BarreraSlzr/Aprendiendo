#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaracion de variables
    int areaTriangulo,base,altura;//modelo de datos
    //inicializacion
    base=10;
    altura=90;
    //operaciones
    areaTriangulo=(base*altura)/2;
    //resultados
    printf("Area de un triangulo:\n");
    printf("base            = %d\n",base);
    printf("altura          = %d\n",altura);
    printf("area triangulo  = %d\n",areaTriangulo);
    return 0;
}
