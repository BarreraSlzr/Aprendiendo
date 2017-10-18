#include <stdio.h>
#include <stdlib.h>

#define TOTAL_VUELTAS 5

int main()
{
    int i,sumatoria;
    sumatoria=0;
    for(i=1;i<TOTAL_VUELTAS;i++){
        sumatoria+=i;
    }
    printf("i=%d\n",i);
    printf("sumatoria=%d\n",sumatoria);
    return 0;
}
