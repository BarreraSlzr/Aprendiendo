#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    char respuesta;
    respuesta='S'; 
	do{
        printf("Quieres ser mi novia? (S/N)");
        scanf("%c",&respuesta);
        printf("\n");
        (respuesta=='s')?respuesta='S':12;
        getchar();
    }
    while(respuesta!='S'); 
    printf("Ya tengo novia!\n");
    return 0;
}
