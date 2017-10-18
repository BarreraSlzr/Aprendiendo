#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Entrada de datos con getchar
    char respuesta;
    printf("Curso de Programacion\n");
    printf("Elige una respuesta de las siguientes:\n");
    printf("Esta bueno el curso?\n");
    printf("Respuesta (S/N): ");
    respuesta=getchar();//lee el caracter/letra tecleado
    printf("\nTu respuesta fue \"%c\"\n",respuesta);
    printf("Presione entrar para terminar");
    getchar();//lee el enter tecleado despues del caracter/letra
    getchar();//lee otro enter
    return 0;
}
