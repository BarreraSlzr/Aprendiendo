#include <stdio.h>
#include <stdlib.h>

int main()
{
    char enero[6];
    enero[0]='E';
    enero[1]='n';
    enero[2]='e';//¿que pasa si en lugar de 'e' escribo '\0'?
    enero[3]='r';
    enero[4]='o';
    enero[5]='\0';//caracter nulo
    /*¿que pasa si comento la linea anterior y la memoria de la
      computadora lleva varios dias de uso sin apargar la compu?*/
    printf("%s\n",enero);
    return 0;
}
