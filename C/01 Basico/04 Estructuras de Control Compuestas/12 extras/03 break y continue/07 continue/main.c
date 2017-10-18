#include <stdio.h>
#include <stdlib.h>

#define MAX_ITERACIONES 8

int main()
{
    int i;
    for(i=0;i<MAX_ITERACIONES;i++){
        if (i%2==0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}
