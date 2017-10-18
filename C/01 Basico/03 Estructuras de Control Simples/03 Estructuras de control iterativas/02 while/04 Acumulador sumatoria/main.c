#include <stdio.h>
#include <stdlib.h>

#define TOTAL_VUELTAS 5

int main()
{
    int i,sumatoria;
    sumatoria=0;
    i=1;
    while(i<TOTAL_VUELTAS){
        sumatoria+=i;
        i++;
    }
    printf("i=%d\n",i);
    printf("sumatoria=%d",sumatoria);
    return 0;
}
