#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anio;
    anio=2013;
    printf("%d\n",anio%400);
    if (anio%400){//si notas algo raro aqui es intencional
        printf("%d es multiplo de 400\n",anio);
    }
    else{
        printf("%d no es multiplo de 400\n",anio);
    }
    return 0;
}
