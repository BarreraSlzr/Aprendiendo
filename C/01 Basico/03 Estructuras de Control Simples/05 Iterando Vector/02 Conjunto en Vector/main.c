#include <stdio.h>
#include <stdlib.h>

#define TOTAL_PRACTICAS 7

int main()
{
    int valores[]={100,90,95,85,90,95,100};
    int i;
    for(i=0;i<TOTAL_PRACTICAS;i++){
        printf("valores[%d]=%d\n",i,valores[i]);
    }
    return 0;
}
