#include <stdio.h>
#include <stdlib.h>

int main()
{
    char respuesta;
    printf("Curso de Programacion\n");
    printf("Elige una respuesta de las siguientes:\n");
    printf("Esta bueno el curso?\n");
    printf("Respuesta (SI/NO): ");
    respuesta=getchar();
    printf("\nTu respuesta fue \"%c\"\n",respuesta);
    respuesta=getchar();
    printf("\nOtro caracter fue \"%c\"\n",respuesta);
    getchar();
    printf("Presione entrar para terminar");
    getchar();
    return 0;
}
