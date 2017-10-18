#include <stdio.h>
#include <stdlib.h>

#define EDAD_ADULTA 18

int main()
{
    int edad;
    int mayorDeEdad;  //bandera
    printf("dame tu edad:");
    scanf("%d",&edad);
    mayorDeEdad=edad>=EDAD_ADULTA;
    if (mayorDeEdad){
        printf("entra a la disco\n");
    }
    else{
        printf("vayase a jugar!\n");
    }
    return 0;
}
